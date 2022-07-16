# цвет текста на всех стрелках
# если он будет разный, удали эту переменную
TEXT_COL="#220a3e"

# цвет первой стрелки (та, где имя юзера)
# в случае если эта команда первая или предыдущая
# команда выполнилась без ошибок
USER_OK_ARR_COL="#ffc4e5"

# цвет текста на первой стрелке в этих случаях
USER_OK_TXT_COL=$TEXT_COL

# цвет первой стрелки если предыдущая команда
# выполнилась с ошибками
USER_ERR_ARR_COL="#ff335c"

# цвет текста на первой стрелке в этом случае
USER_ERR_TXT_COL=$TEXT_COL

# цвет второй стрелки (которая с путем)
DIR_ARR_COL="183"

# цвет текста на второй стрелке
DIR_TXT_COL=$TEXT_COL

# цвет стрелки гита
GIT_ARR_COL="#ffa8af"

# цвет текста на стрелке гита
GIT_TXT_COL=$TEXT_COL

# цвет UwU
UWU_COL=ffc4e5

# цвет OwO
OWO_COL=ff335c

# цвет времени
TIME_COL="#ffffff"


# echo OwO if there are errors, nothing otherwise
return_status() {
    echo "%(?.%B%F{#$UWU_COL}UwU%f%b.%B%F{#$OWO_COL}OwO%f%b)"
}

right_triangle() {
    echo $'\ue0b0'
}

arrow_start() {
    echo "%F{$ARROW_FG}%K{$ARROW_BG}%B"
}

arrow_end() {
    echo "%b%f%k%F{$NEXT_ARROW_FG}%K{$NEXT_ARROW_BG}$(right_triangle)%f%k"
}

ok_username() {
    ARROW_FG=$USER_OK_TXT_COL
    ARROW_BG=$USER_OK_ARR_COL
    NEXT_ARROW_BG=$DIR_ARR_COL
    NEXT_ARROW_FG=$USER_OK_ARR_COL
    echo "$(arrow_start) %n $(arrow_end)"
}

err_username() {
    ARROW_FG=$USER_ERR_TXT_COL
    ARROW_BG=$USER_ERR_ARR_COL
    NEXT_ARROW_BG=$DIR_ARR_COL
    NEXT_ARROW_FG=$USER_ERR_ARR_COL
    echo "$(arrow_start) %n $(arrow_end)"
}

# return err_username if there are errors, ok_username otherwise
username() {
    echo "%(?.$(ok_username).$(err_username))"
}

directory_and_git() {
    ARROW_FG=$DIR_TXT_COL
    ARROW_BG=$DIR_ARR_COL
    NEXT_ARROW_BG=""
    NEXT_ARROW_FG=$DIR_ARR_COL
    if [ "$(git rev-parse --is-inside-work-tree 2>/dev/null)" ]; then
        NEXT_ARROW_BG=$GIT_ARR_COL
        echo -n "$(arrow_start) %2~ $(arrow_end)"
        ARROW_FG=$GIT_TXT_COL
        ARROW_BG=$GIT_ARR_COL
        NEXT_ARROW_BG=""
        NEXT_ARROW_FG=$GIT_ARR_COL
        echo "$(arrow_start) $(git_prompt_info) $(arrow_end)"
    else
        echo -n "$(arrow_start) %2~ $(arrow_end)"
    fi

}


current_time() {
    #echo "%{$fg%F{$TIME_COL}%}%*%{$reset_color%}"
    echo "%B%F{$TIME_COL}%*%f%b"
}

# set the git_prompt_info text
ZSH_THEME_GIT_PROMPT_PREFIX=""
ZSH_THEME_GIT_PROMPT_SUFFIX=""
ZSH_THEME_GIT_PROMPT_DIRTY="*"
ZSH_THEME_GIT_PROMPT_CLEAN=" "

# set the git_prompt_status text
ZSH_THEME_GIT_PROMPT_ADDED="%{$fg[cyan]%}✈%{$reset_color%}"
ZSH_THEME_GIT_PROMPT_MODIFIED="%{$fg[yellow]%}✭%{$reset_color%}"
ZSH_THEME_GIT_PROMPT_DELETED="%{$fg[red]%}✗%{$reset_color%}"
ZSH_THEME_GIT_PROMPT_RENAMED="%{$fg[blue]%}➦%{$reset_color%}"
ZSH_THEME_GIT_PROMPT_UNMERGED="%{$fg[magenta]%}✂%{$reset_color%}"
ZSH_THEME_GIT_PROMPT_UNTRACKED="%{$fg[white]%}✱%{$reset_color%}"

PROMPT='$(username)$(directory_and_git) '
RPROMPT='$(return_status) $(git_prompt_status) $(current_time)'
