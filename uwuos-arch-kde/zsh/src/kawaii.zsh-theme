# echo OwO if there are errors, nothing otherwise
return_status() {
    echo "%(?.%B%F{#ffc4e5}UwU%f%b.%B%F{#ff335c}OwO%f%b)"
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
    ARROW_FG="#220a3e"
    ARROW_BG="#ffc4e5"
    NEXT_ARROW_BG="183"
    NEXT_ARROW_FG="#ffc4e5"
    echo "$(arrow_start) %n $(arrow_end)"
}

err_username() {
    ARROW_FG="#220a3e"
    ARROW_BG="#ff335c"
    NEXT_ARROW_BG="183"
    NEXT_ARROW_FG="#ff335c"
    echo "$(arrow_start) %n $(arrow_end)"
}

# return err_username if there are errors, ok_username otherwise
username() {
    echo "%(?.$(ok_username).$(err_username))"
}

directory_and_git() {
    ARROW_FG="#220a3e"
    ARROW_BG="183"
    NEXT_ARROW_BG=""
    NEXT_ARROW_FG="183"
    if [ "$(git rev-parse --is-inside-work-tree 2>/dev/null)" ]; then
        NEXT_ARROW_BG="#ffa8af"
        echo -n "$(arrow_start) %2~ $(arrow_end)"
        ARROW_FG="#220a3e"
        ARROW_BG="#ffa8af"
        NEXT_ARROW_BG=""
        NEXT_ARROW_FG="#ffa8af"
        echo "$(arrow_start) $(git_prompt_info) $(arrow_end)"
    else
        echo -n "$(arrow_start) %2~ $(arrow_end)"
    fi

}

git_prompt() {
    ARROW_FG="#220a3e"
    ARROW_BG="139"
    NEXT_ARROW_BG=""
    NEXT_ARROW_FG="139"
    echo "$(arrow_start) $(git_prompt_info) $(arrow_end)"
}

current_time() {
    echo "%{$fg[white]%}%*%{$reset_color%}"
}

git_prompt_status_uwu() {
    gps=$(git_prompt_status)
    if [ -z $gps ]; then
        gps=" "
    fi
    echo $gps
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
RPROMPT='$(return_status) $(git_prompt_status_uwu) $(current_time)'
