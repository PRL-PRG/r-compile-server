#!/bin/bash

SERVER_DIR="server"

cd "$SERVER_DIR"

everything_staged=$(git diff --name-only -- "$SERVER_DIR")
# `no_partial_stages` from https://github.com/evilmartians/lefthook/issues/140#issuecomment-1012967850
no_partial_stages=$(comm -12 <(git diff --name-only -- "$SERVER_DIR" | sort) <(git diff --name-only --staged -- "$SERVER_DIR" | sort))
format_only_staged=-DspotlessFiles="$(git diff --staged --name-only -- "$SERVER_DIR" | sed 's/^/.*/' | paste -sd ',' -)"

if [ -n "$no_partial_stages" ]; then
	# Format only staged changes. Don't commit if we change anything, because we can't partially format a file, and it's
	# ambiguous what formatting changes should be staged and what shouldn't.
	mvn spotless:check "$format_only_staged" || {
		mvn spotless:apply "$format_only_staged"
		echo "Reformatted a partially-staged file. Re-interactively-stage and commit again."
		exit 1
	}
elif [ -n "$everything_staged" ]; then
	# Format only staged changes. We must re-add them because the formats aren't committed.
	mvn spotless:apply "$format_only_staged"
	git diff --name-only --staged -- "$SERVER_DIR" | tr \\n \\0 | xargs -0 git add -f
else
	# Format everything because spotless caches. We must re-add everything because the formats aren't committed.
	mvn spotless:apply
	git add -u
fi
