# Add ~/bin to PATH if it's not already there
if [ -d "$HOME/bin" ] ; then
    case ":$PATH:" in
        *":$HOME/bin:"*) ;; # already in PATH
        *) export PATH="$HOME/bin:$PATH" ;;
    esac
fi