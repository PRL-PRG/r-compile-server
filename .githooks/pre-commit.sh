#!/bin/sh

everything_staged=$(git diff --name-only)

if [ -n "$everything_staged" ]; then
  # Don't commit because, after we reformat, the formatting will be unstaged, but it's too hard to determine (and maybe
  # ambiguous) what are the formatting differences and what was originally unstaged.
  mvn spotless:check || {
    echo "*** ERROR ***"
    echo "Detected a partial commit that doesn't have proper formatting."
    echo "Run 'mvn spotless:apply', make sure every change you want to commit is added, and commit again."
    exit 1
  }
else
  # It's not ambiguous, just format and re-add everything tracked
  mvn spotless:apply
  git add -u
fi
