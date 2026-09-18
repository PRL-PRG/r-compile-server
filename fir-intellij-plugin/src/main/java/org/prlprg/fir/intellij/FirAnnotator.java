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

/**
 * Lightweight, regex-and-scanner based lints for FIŘ files. These don't build a real AST; they
 * catch the common slips when hand-editing IR (unbalanced delimiters, missing `;`, invalid register
 * names, and syntax left over from older versions of the textual form).
 */
public final class FirAnnotator implements Annotator {
  private static final Pattern FUN_DECLARATION = Pattern.compile("(?m)^\\s*fun\\b");

  /** A register definition at the start of a statement: {@code name: type = ...}. */
  private static final Pattern ASSIGNEE =
      Pattern.compile("(?m)^\\s*(`(?:\\\\.|[^`])*`|[A-Za-z_][A-Za-z0-9_]*)\\s*:[^=;\\n]*=");

  /** A block header: {@code Label(params):} at the start of a line. */
  private static final Pattern BLOCK_HEADER =
      Pattern.compile("(?m)^\\s*([A-Za-z_][A-Za-z0-9_]*)\\s*\\(([^)\\n]*)\\)\\s*:\\s*(?:#.*)?$");

  /** A typed name in a parameter list: {@code name: type} (the type is not validated). */
  private static final Pattern TYPED_NAME =
      Pattern.compile("^(`(?:\\\\.|[^`])*`|[A-Za-z_][A-Za-z0-9_]*)\\s*:");

  private static final Pattern LEGACY_PARAMETER_KIND_PREFIX = Pattern.compile("^reg\\b");
  private static final Pattern SIMPLE_IDENTIFIER = Pattern.compile("[A-Za-z_][A-Za-z0-9_]*");

  @Override
  public void annotate(@NotNull PsiElement element, @NotNull AnnotationHolder holder) {
    if (!(element instanceof PsiFile file) || file.getLanguage() != FirLanguage.INSTANCE) {
      return;
    }

    var text = file.getText();
    var textLength = text.length();
    for (var issue : collectIssues(text)) {
      var safeRange = clamp(issue.range(), textLength);
      if (safeRange == null) {
        continue;
      }
      holder.newAnnotation(issue.severity(), issue.message()).range(safeRange).create();
    }
  }

  /** All lint issues for {@code text}, in no particular order. Empty for blank text. */
  static ArrayList<Issue> collectIssues(String text) {
    var issues = new ArrayList<Issue>();
    if (text.isBlank()) {
      return issues;
    }

    var stripped = FirTextScanner.stripCommentsAndStrings(text);
    lintFunctionDeclarations(stripped, issues);
    lintDelimiters(stripped, issues);
    lintSemicolons(text, issues);
    lintParameters(text, stripped, issues);
    lintLegacyDeclarationLists(stripped, issues);
    lintAssignees(text, stripped, issues);
    lintBlockParameters(text, stripped, issues);
    return issues;
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
    FirTextScanner.scan(
        stripped,
        0,
        stripped.length(),
        (i, c) -> {
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
      if (shouldEndWithSemicolon(trimmed)) {
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

  /**
   * Whether a (comment-free, trimmed) line looks like an instruction that forgot its `;`. Lines
   * that open or close a construct, headers (`fun`, `@strict`, block labels ending in `:`), stub
   * bodies, and lines that obviously continue onto the next one are exempt.
   */
  private static boolean shouldEndWithSemicolon(String trimmedLine) {
    if (trimmedLine.isEmpty() || trimmedLine.equals("...")) {
      return false;
    }
    if (trimmedLine.startsWith("@") || trimmedLine.startsWith("fun ")) {
      return false;
    }
    return !trimmedLine.endsWith(";")
        && !trimmedLine.endsWith("{")
        && !trimmedLine.endsWith("}")
        && !trimmedLine.endsWith(":")
        && !trimmedLine.endsWith(",")
        && !trimmedLine.endsWith("(")
        && !trimmedLine.endsWith("[")
        && !trimmedLine.endsWith("<")
        && !trimmedLine.endsWith("=")
        && !trimmedLine.contains("{ ... }");
  }

  /**
   * Version parameters are written {@code name:type} (or {@code name:type@!}): check each name is
   * a valid register name, and flag the legacy {@code reg} prefix.
   */
  private static void lintParameters(String text, String stripped, ArrayList<Issue> issues) {
    for (var i = 0; i < stripped.length(); i++) {
      if (stripped.charAt(i) != '(' || !isFirstOnLine(stripped, i)) continue;

      var close = findMatchingParenDelimiter(stripped, i);
      if (close < 0 || !isVersionArrowAfterParen(stripped, close + 1)) continue;

      for (var segment : splitTopLevelCommaSegments(stripped, i + 1, close)) {
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
        if (LEGACY_PARAMETER_KIND_PREFIX.matcher(declaration).find()) {
          issues.add(
              new Issue(
                  new TextRange(start, start + 3),
                  HighlightSeverity.ERROR,
                  "Unexpected `reg`: parameters are written `name:type`"));
          continue;
        }

        var matcher = TYPED_NAME.matcher(declaration);
        if (!matcher.find()) {
          issues.add(
              new Issue(
                  new TextRange(start, end),
                  HighlightSeverity.ERROR,
                  "Expected a parameter `name:type`"));
          continue;
        }
        checkRegisterName(matcher.group(1), start + matcher.start(1), issues);
      }
    }
  }

  /**
   * Older FIŘ declared registers and named variables up front, in a list ending with `|` right
   * after a version's `{`. Registers are now typed where they're defined and named variables
   * aren't declared, so such a list is an error.
   */
  private static void lintLegacyDeclarationLists(String stripped, ArrayList<Issue> issues) {
    for (var i = 0; i < stripped.length(); i++) {
      if (stripped.charAt(i) != '{' || !isVersionArrowBeforeBrace(stripped, i)) continue;

      var separator = findTopLevelPipeBeforeSemicolon(stripped, i + 1);
      if (separator < 0) continue;

      issues.add(
          new Issue(
              new TextRange(separator, separator + 1),
              HighlightSeverity.ERROR,
              "Legacy declaration list: registers are declared where they're defined"
                  + " (`r: t = ...`, `L(r: t):`), and named variables aren't declared"));
    }
  }

  /** Statement assignees define registers: {@code name: type = expr}. */
  private static void lintAssignees(String text, String stripped, ArrayList<Issue> issues) {
    var matcher = ASSIGNEE.matcher(stripped);
    while (matcher.find()) {
      var name = text.substring(matcher.start(1), matcher.end(1));
      checkRegisterName(name, matcher.start(1), issues);
    }
  }

  /** Block parameters define registers: {@code Label(name: type, ...):}. */
  private static void lintBlockParameters(String text, String stripped, ArrayList<Issue> issues) {
    var matcher = BLOCK_HEADER.matcher(stripped);
    while (matcher.find()) {
      var listStart = matcher.start(2);
      var listEnd = matcher.end(2);
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
        var typed = TYPED_NAME.matcher(declaration);
        if (!typed.find()) {
          issues.add(
              new Issue(
                  new TextRange(start, end),
                  HighlightSeverity.ERROR,
                  "Expected a block parameter `name: type`"));
          continue;
        }
        checkRegisterName(typed.group(1), start + typed.start(1), issues);
      }
    }
  }

  // endregion

  // region Helpers

  private static void checkRegisterName(String name, int offset, ArrayList<Issue> issues) {
    if (!isValidRegisterName(name)) {
      issues.add(
          new Issue(
              new TextRange(offset, offset + name.length()),
              HighlightSeverity.ERROR,
              "Invalid register name `" + name + "` (registers are plain identifiers)"));
    }
  }

  /**
   * Whether only whitespace precedes {@code offset} on its line. A version header's `(` starts its
   * line; a `(` inside a call signature (`f< v1(I) --> V >(...)`) never does.
   */
  private static boolean isFirstOnLine(String stripped, int offset) {
    for (var i = offset - 1; i >= 0; i--) {
      var c = stripped.charAt(i);
      if (c == '\n') {
        return true;
      }
      if (!Character.isWhitespace(c)) {
        return false;
      }
    }
    return true;
  }

  private static int findMatchingParenDelimiter(String stripped, int openOffset) {
    var depth = 1;
    for (var i = openOffset + 1; i < stripped.length(); i++) {
      var c = stripped.charAt(i);
      if (c == '(') depth++;
      else if (c == ')') {
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

  /** Whether the `{` at {@code braceOffset} opens a version body (it follows `-fx> type`). */
  private static boolean isVersionArrowBeforeBrace(String stripped, int braceOffset) {
    // Walk back over the return type to the arrow. Types contain no braces or semicolons, so stop
    // at the nearest of those.
    var i = braceOffset - 1;
    while (i >= 0) {
      var c = stripped.charAt(i);
      if (c == '{' || c == '}' || c == ';' || c == '\n') {
        return false;
      }
      if (c == '>' && i >= 2 && isEffect(stripped.charAt(i - 1)) && stripped.charAt(i - 2) == '-') {
        return true;
      }
      i--;
    }
    return false;
  }

  /** The offset of a top-level `|` after {@code offset} and before the first `;`, or -1. */
  private static int findTopLevelPipeBeforeSemicolon(String stripped, int offset) {
    var depth = 0;
    for (var i = offset; i < stripped.length(); i++) {
      var c = stripped.charAt(i);
      if (c == '{' || c == '(' || c == '[') {
        depth++;
      } else if (c == '}' || c == ')' || c == ']') {
        if (depth == 0) return -1;
        depth--;
      } else if (c == ';' && depth == 0) {
        return -1;
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

  /** The effect characters of a `-fx>` arrow: none, impure, reflective. */
  private static boolean isEffect(char c) {
    return c == '-' || c == '~' || c == '+';
  }

  private static boolean isValidRegisterName(String name) {
    return SIMPLE_IDENTIFIER.matcher(name).matches() && !name.equals("_");
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

  record Issue(TextRange range, HighlightSeverity severity, String message) {}

  private record Delimiter(char value, int offset) {}

  private record Segment(int startOffset, int endOffset) {}
}
