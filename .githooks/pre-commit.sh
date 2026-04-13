#!/bin/bash

SERVER_DIR="server"
MVN="mvn -f $SERVER_DIR"

staged_files=$(git diff --staged --name-only --diff-filter=d -- $SERVER_DIR)
everything_staged=$(git diff --name-only --diff-filter=d -- $SERVER_DIR)
# `partially_staged` from https://github.com/evilmartians/lefthook/issues/140#issuecomment-1012967850
partially_staged=$(comm -12 <(echo "$everything_staged" | sort) <(echo "$staged_files" | sort))
format_only_staged=-DspotlessFiles="$(echo "$staged_files" | sed 's/^/.*/' | paste -sd ',' -)"

if [ -n "$partially_staged" ]; then
	# Format only staged changes. Don't commit if we change anything, because we can't partially format a file, and it's
	# ambiguous what formatting changes should be staged and what shouldn't.
	$MVN spotless:check $format_only_staged || {
		$MVN spotless:apply $format_only_staged
		echo "Reformatted a partially-staged file. Re-interactively-stage and commit again."
		exit 1
	}
elif [ -n "$everything_staged" ]; then
	# Format only staged changes. We must re-add them because the formats aren't committed.
	$MVN spotless:apply $format_only_staged
	echo "$staged_files" | tr '\n' '\0' | xargs -0 git add
else
	# Format everything because spotless caches. We must re-add everything because the formats aren't committed.
	$MVN spotless:apply
	echo "$staged_files" | tr '\n' '\0' | xargs -0 git add
fi
