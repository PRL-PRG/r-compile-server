package org.prlprg.fir.intellij;

import com.intellij.lang.annotation.AnnotationHolder;
import com.intellij.lang.annotation.Annotator;
import com.intellij.lang.annotation.HighlightSeverity;
import com.intellij.openapi.util.TextRange;
import com.intellij.psi.PsiElement;
import com.intellij.psi.PsiFile;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.regex.Pattern;
import org.jetbrains.annotations.NotNull;
import org.jetbrains.annotations.Nullable;

public final class FirAnnotator implements Annotator {
  private static final Pattern FUN_DECLARATION = Pattern.compile("(?m)^\\s*fun\\b");
  private static final Pattern DECLARATION =
      Pattern.compile(
          "\\b(reg|var)\\s+(`(?:\\\\.|[^`])*`|[^\\s:,|)]+)\\s*:\\s*((?:p\\((?:v1?\\([^,|)\\n]+\\))?[^,|)\\n]+\\))?(?:v1?\\([^,|)\\n]+\\))?[^,|)\\n]+)");
  private static final Pattern DECLARATION_KIND_PREFIX = Pattern.compile("^(reg|var)\\b");
  private static final Pattern TYPED_DECLARATION_WITHOUT_KIND =
      Pattern.compile("^(`(?:\\\\.|[^`])*`|[A-Za-z_][A-Za-z0-9_]*)\\s*:");
  private static final Pattern SIMPLE_IDENTIFIER = Pattern.compile("[A-Za-z_][A-Za-z0-9_]*");

  @Override
  public void annotate(@NotNull PsiElement element, @NotNull AnnotationHolder holder) {
    if (!(element instanceof PsiFile file) || file.getLanguage() != FirLanguage.INSTANCE) {
      return;
    }

    var text = file.getText();
    if (text.isBlank()) {
      return;
    }

    var stripped = FirTextScanner.stripCommentsAndStrings(text);
    var issues = new ArrayList<Issue>();
    lintFunctionDeclarations(stripped, issues);
    lintDelimiters(stripped, issues);
    lintSemicolons(text, issues);
    lintDeclarations(text, issues);
    lintMissingDeclarationKinds(text, stripped, issues);

    var textLength = text.length();
    for (var issue : issues) {
      var safeRange = clamp(issue.range(), textLength);
      if (safeRange == null) {
        continue;
      }
      holder.newAnnotation(issue.severity(), issue.message()).range(safeRange).create();
    }
  }

  // region Lint checks

  private static void lintFunctionDeclarations(String stripped, ArrayList<Issue> issues) {
    if (FUN_DECLARATION.matcher(stripped).find()) {
      return;
    }
    var range = new TextRange(0, Math.min(1, stripped.length()));
    issues.add(new Issue(range, HighlightSeverity.WARNING, "No `fun` declaration found in file"));
  }

  private static void lintDelimiters(String stripped, ArrayList<Issue> issues) {
    var stack = new ArrayDeque<Delimiter>();
    FirTextScanner.scan(stripped, 0, stripped.length(), (i, c) -> {
      if (c == '(' || c == '[' || c == '{') {
        stack.push(new Delimiter(c, i));
      } else if (c == ')' || c == ']' || c == '}') {
        if (stack.isEmpty()) {
          issues.add(
              new Issue(
                  new TextRange(i, i + 1),
                  HighlightSeverity.ERROR,
                  "Unmatched closing delimiter `" + c + "`"));
        } else {
          var open = stack.pop();
          if (!isMatchingPair(open.value(), c)) {
            issues.add(
                new Issue(
                    new TextRange(i, i + 1),
                    HighlightSeverity.ERROR,
                    "Mismatched closing delimiter `"
                        + c
                        + "` (expected `"
                        + matchingClose(open.value())
                        + "`)"));
          }
        }
      }
      return true;
    });

    for (var open : stack) {
      issues.add(
          new Issue(
              new TextRange(open.offset(), open.offset() + 1),
              HighlightSeverity.ERROR,
              "Unclosed delimiter `" + open.value() + "`"));
    }
  }

  private static void lintSemicolons(String text, ArrayList<Issue> issues) {
    var lineStart = 0;
    while (lineStart <= text.length()) {
      var lineEnd = text.indexOf('\n', lineStart);
      if (lineEnd < 0) {
        lineEnd = text.length();
      }

      var commentStart = FirTextScanner.findCommentStart(text, lineStart, lineEnd);
      var visibleEnd = commentStart >= 0 ? commentStart : lineEnd;
      var visibleLine = text.substring(lineStart, visibleEnd);
      var trimmed = visibleLine.trim();
      if (shouldEndWithSemicolon(trimmed) && !trimmed.endsWith(";")) {
        var highlightEnd = visibleEnd;
        while (highlightEnd > lineStart && Character.isWhitespace(text.charAt(highlightEnd - 1))) {
          highlightEnd--;
        }
        var safeEnd = Math.max(lineStart + 1, highlightEnd);
        issues.add(
            new Issue(
                new TextRange(safeEnd - 1, safeEnd),
                HighlightSeverity.WARNING,
                "Potentially missing `;`"));
      }

      if (lineEnd == text.length()) {
        break;
      }
      lineStart = lineEnd + 1;
    }
  }

  private static boolean shouldEndWithSemicolon(String trimmedLine) {
    if (trimmedLine.isEmpty() || trimmedLine.equals("...")) {
      return false;
    }
    if (trimmedLine.startsWith("fun ")) {
      return false;
    }
    return !trimmedLine.endsWith(";")
        && !trimmedLine.endsWith("{")
        && !trimmedLine.endsWith("}")
        && !trimmedLine.endsWith("|")
        && !trimmedLine.endsWith(":")
        && !trimmedLine.contains("{ ... }");
  }

  private static void lintDeclarations(String text, ArrayList<Issue> issues) {
    var matcher = DECLARATION.matcher(text);
    while (matcher.find()) {
      var kind = matcher.group(1);
      var name = matcher.group(2);
      var type = matcher.group(3);
      if (kind == null || name == null || type == null) {
        continue;
      }

      if ("reg".equals(kind) && !isValidRegisterName(name)) {
        issues.add(
            new Issue(
                new TextRange(matcher.start(2), matcher.end(2)),
                HighlightSeverity.ERROR,
                "Invalid register name `" + name + "`"));
      }
      if ("var".equals(kind) && !isValidVariableName(name)) {
        issues.add(
            new Issue(
                new TextRange(matcher.start(2), matcher.end(2)),
                HighlightSeverity.ERROR,
                "Invalid named variable `" + name + "`"));
      }

      if ("var".equals(kind)) {
        var normalizedType = type.replaceAll("\\s+", "").split("@")[0];
        if (!normalizedType.equals("*") && !normalizedType.endsWith("?")) {
          issues.add(
              new Issue(
                  new TextRange(matcher.start(3), matcher.end(3)),
                  HighlightSeverity.WARNING,
                  "Named variable types should be maybe-types (`t?`) or `*`"));
        }
      }
    }
  }

  private static void lintMissingDeclarationKinds(
      String text, String stripped, ArrayList<Issue> issues) {
    lintMissingParameterKinds(text, stripped, issues);
    lintMissingLocalVariableKinds(text, stripped, issues);
  }

  private static void lintMissingParameterKinds(
      String text, String stripped, ArrayList<Issue> issues) {
    for (var i = 0; i < stripped.length(); i++) {
      if (stripped.charAt(i) != '(') continue;

      var close = findMatchingDelimiter(stripped, i, '(', ')');
      if (close < 0 || !isVersionArrowAfterParen(stripped, close + 1)) continue;

      lintMissingDeclarationKindsInList(
          text,
          stripped,
          i + 1,
          close,
          issues,
          "Potentially missing `reg` or `var` before parameter declaration");
    }
  }

  private static void lintMissingLocalVariableKinds(
      String text, String stripped, ArrayList<Issue> issues) {
    for (var i = 0; i < stripped.length(); i++) {
      if (stripped.charAt(i) != '{' || !isVersionArrowBeforeBrace(stripped, i)) continue;

      var separator = findTopLevelPipeBeforeClosingBrace(stripped, i + 1);
      if (separator < 0) continue;

      lintMissingDeclarationKindsInList(
          text,
          stripped,
          i + 1,
          separator,
          issues,
          "Potentially missing `reg` or `var` before local declaration");
    }
  }

  // endregion

  // region Helpers

  private static void lintMissingDeclarationKindsInList(
      String text,
      String stripped,
      int listStart,
      int listEnd,
      ArrayList<Issue> issues,
      String message) {
    for (var segment : splitTopLevelCommaSegments(stripped, listStart, listEnd)) {
      var start = segment.startOffset();
      var end = segment.endOffset();
      while (start < end && Character.isWhitespace(text.charAt(start))) {
        start++;
      }
      while (end > start && Character.isWhitespace(text.charAt(end - 1))) {
        end--;
      }
      if (start >= end) {
        continue;
      }

      var declaration = text.substring(start, end);
      if ("...".equals(declaration) || DECLARATION_KIND_PREFIX.matcher(declaration).find()) {
        continue;
      }

      var matcher = TYPED_DECLARATION_WITHOUT_KIND.matcher(declaration);
      if (!matcher.find()) {
        continue;
      }

      issues.add(
          new Issue(
              new TextRange(start + matcher.start(1), start + matcher.end(1)),
              HighlightSeverity.WARNING,
              message));
    }
  }

  private static int findMatchingDelimiter(String stripped, int openOffset, char open, char close) {
    var depth = 1;
    for (var i = openOffset + 1; i < stripped.length(); i++) {
      var c = stripped.charAt(i);
      if (c == open) depth++;
      else if (c == close) {
        depth--;
        if (depth == 0) return i;
      }
    }
    return -1;
  }

  private static boolean isVersionArrowAfterParen(String stripped, int offset) {
    var i = offset;
    while (i < stripped.length() && Character.isWhitespace(stripped.charAt(i))) {
      i++;
    }
    return i + 2 < stripped.length()
        && stripped.charAt(i) == '-'
        && isEffect(stripped.charAt(i + 1))
        && stripped.charAt(i + 2) == '>';
  }

  private static boolean isVersionArrowBeforeBrace(String stripped, int braceOffset) {
    var i = braceOffset - 1;
    while (i >= 0 && Character.isWhitespace(stripped.charAt(i))) {
      i--;
    }
    return i >= 2
        && stripped.charAt(i) == '>'
        && isEffect(stripped.charAt(i - 1))
        && stripped.charAt(i - 2) == '-';
  }

  private static int findTopLevelPipeBeforeClosingBrace(String stripped, int offset) {
    var depth = 0;
    for (var i = offset; i < stripped.length(); i++) {
      var c = stripped.charAt(i);
      if (c == '{') {
        depth++;
      } else if (c == '}') {
        if (depth == 0) return -1;
        depth--;
      } else if (c == '|' && depth == 0) {
        return i;
      }
    }
    return -1;
  }

  private static ArrayList<Segment> splitTopLevelCommaSegments(
      String stripped, int startOffset, int endOffset) {
    var segments = new ArrayList<Segment>();
    var segmentStart = startOffset;
    var parenDepth = 0;
    var bracketDepth = 0;
    var angleDepth = 0;
    for (var i = startOffset; i < endOffset; i++) {
      var c = stripped.charAt(i);
      switch (c) {
        case '(' -> parenDepth++;
        case ')' -> parenDepth = Math.max(0, parenDepth - 1);
        case '[' -> bracketDepth++;
        case ']' -> bracketDepth = Math.max(0, bracketDepth - 1);
        case '<' -> angleDepth++;
        case '>' -> angleDepth = Math.max(0, angleDepth - 1);
        case ',' -> {
          if (parenDepth == 0 && bracketDepth == 0 && angleDepth == 0) {
            segments.add(new Segment(segmentStart, i));
            segmentStart = i + 1;
          }
        }
      }
    }
    segments.add(new Segment(segmentStart, endOffset));
    return segments;
  }

  private static boolean isEffect(char c) {
    return c == '-' || c == '+' || c == '~' || c == '*';
  }

  private static boolean isValidRegisterName(String name) {
    return SIMPLE_IDENTIFIER.matcher(name).matches() && !name.equals("_");
  }

  private static boolean isValidVariableName(String name) {
    if (name.startsWith("`")) {
      return isValidBacktickName(name);
    }
    return SIMPLE_IDENTIFIER.matcher(name).matches() && !name.equals("_");
  }

  private static boolean isValidBacktickName(String name) {
    if (!name.startsWith("`") || !name.endsWith("`") || name.length() < 3) {
      return false;
    }
    var escaped = false;
    for (var i = 1; i < name.length() - 1; i++) {
      var c = name.charAt(i);
      if (escaped) {
        escaped = false;
        continue;
      }
      if (c == '\\') {
        escaped = true;
        continue;
      }
      if (c == '`') {
        return false;
      }
    }
    return !escaped;
  }

  private static boolean isMatchingPair(char open, char close) {
    return (open == '(' && close == ')')
        || (open == '[' && close == ']')
        || (open == '{' && close == '}');
  }

  private static char matchingClose(char open) {
    return switch (open) {
      case '(' -> ')';
      case '[' -> ']';
      case '{' -> '}';
      default -> '?';
    };
  }

  private static @Nullable TextRange clamp(TextRange range, int textLength) {
    if (textLength <= 0) {
      return null;
    }
    var start = Math.max(0, Math.min(range.getStartOffset(), textLength - 1));
    var end = Math.max(start + 1, Math.min(range.getEndOffset(), textLength));
    return new TextRange(start, end);
  }

  // endregion

  private record Issue(TextRange range, HighlightSeverity severity, String message) {}

  private record Delimiter(char value, int offset) {}

  private record Segment(int startOffset, int endOffset) {}
}
