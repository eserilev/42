cat /etc/passwd | cut -d : -f 1 | sed '/^#/ d' | awk '(NR+1)%2==1' | rev | sort -fr | sed -n ''"$FT_LINE1"','"$FT_LINE2"'p' |tr '\n' ',' | sed 's/,$/./' | tr -d "\n"
