#1 /bin/zsh
cat /etc/passwd | grep -v "^#" | awk 'NR%2==0' | cut -d ':' -f 1 | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | tr ā\nā ā,ā | sed 's/,/, /g' | sed 's/, $/./g' | tr -d '\n'
