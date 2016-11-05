find . -name "*.sh" | sed -e "s/\.sh//" | rev | cut -f 1 -d '/' | rev
