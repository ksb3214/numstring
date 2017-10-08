#/bin/bash

if [[ -z $1 ]]; then
	echo "Usage: $0 <string>"
fi

echo "$@"
COUNT=0

while read -n1 char; do
	let POS=($COUNT+1)%10
    printf "%d" "$POS"
	let COUNT=$COUNT+1
done < <(echo -n "$@")

echo ""
