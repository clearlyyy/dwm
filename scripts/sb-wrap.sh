#!/bin/sh
# Usage: sb-wrap.sh <block-script>
. /home/clearly/dwm/scripts/sb-colors.sh

# Print delimiter in color
echo -n "$DELIM_COLOR"

# Run the block script
"$@"

# Reset color after block
echo -n "^d^"

