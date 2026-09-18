package org.prlprg.fir.intellij;

import com.intellij.lexer.LexerBase;
import com.intellij.psi.TokenType;
import com.intellij.psi.tree.IElementType;
import java.util.List;
import java.util.Set;
import org.jetbrains.annotations.NotNull;
import org.jetbrains.annotations.Nullable;

/**
 * Tokenizes FIŘ text for highlighting and the lightweight structural parser.
 *
 * <p>Mirrors the textual syntax read by {@code org.prlprg.fir.parseprint.ModuleParseContext} (see
 * {@code server/doc/grammar.typ}).
 */
public final class FirLexer extends LexerBase {
  /** Keywords that are plain identifiers. */
  private static final Set<String> KEYWORDS =
      Set.of(
          // Module structure
          "fun",
          // Jumps
          "goto",
          "if",
          "then",
          "else",
          "check",
          "deopt",
          "return",
          "raise",
          "unreachable",
          // Expressions
          "noop",
          "mkenv",
          "popenv",
          "ld",
          "ldf",
          "st",
          "prom",
          "clos",
          "dyn",
          "force",
          "dup",
          "as",
          "consume");

  /**
   * Keywords that contain non-identifier characters, so they must be matched before identifiers
   * are read. Longer forms come first so that e.g. {@code ldf-glob} wins over {@code ldf}.
   */
  private static final List<String> COMPOUND_KEYWORDS =
      List.of(
          "@liteSpecial",
          "@strict",
          "clos-static",
          "ldf-glob",
          "ldf-base",
          "ld-super",
          "st-super",
          "mkenv~",
          "mkenv-",
          "force?",
          "prom-");

  /** Constant literals that are identifiers. */
  private static final Set<String> CONSTANTS =
      Set.of("TRUE", "FALSE", "TRUE_LGL", "FALSE_LGL", "NA_LGL", "NA_INT", "NA_REAL", "NA_STR");

  /** Type kinds that are always types. */
  private static final Set<String> TYPE_NAMES = Set.of("I", "L", "R", "S", "V", "B", "cls", "miss");

  /**
   * Names that are types (or vector constructors) only when applied: {@code v(I)}, {@code v1(I)},
   * {@code p(V +)}, {@code p?(V +)}, {@code dots[...]}. Otherwise they're ordinary register names.
   */
  private static final Set<String> APPLIED_TYPE_NAMES = Set.of("v", "v1", "p", "dots");

  private @NotNull CharSequence buffer = "";
  private int endOffset;
  private int tokenStart;
  private int tokenEnd;
  private int position;
  private @Nullable IElementType tokenType;

  @Override
  public void start(
      @NotNull CharSequence buffer, int startOffset, int endOffset, int initialState) {
    this.buffer = buffer;
    this.endOffset = endOffset;
    this.position = startOffset;
    this.tokenStart = startOffset;
    this.tokenEnd = startOffset;
    this.tokenType = null;
    locateToken();
  }

  @Override
  public int getState() {
    return 0;
  }

  @Override
  public @Nullable IElementType getTokenType() {
    return tokenType;
  }

  @Override
  public int getTokenStart() {
    return tokenStart;
  }

  @Override
  public int getTokenEnd() {
    return tokenEnd;
  }

  @Override
  public void advance() {
    position = tokenEnd;
    locateToken();
  }

  @Override
  public @NotNull CharSequence getBufferSequence() {
    return buffer;
  }

  @Override
  public int getBufferEnd() {
    return endOffset;
  }

  private void locateToken() {
    if (position >= endOffset) {
      tokenStart = endOffset;
      tokenEnd = endOffset;
      tokenType = null;
      return;
    }

    tokenStart = position;
    var c = buffer.charAt(position);

    if (Character.isWhitespace(c)) {
      position++;
      while (position < endOffset && Character.isWhitespace(buffer.charAt(position))) {
        position++;
      }
      tokenEnd = position;
      tokenType = TokenType.WHITE_SPACE;
      return;
    }

    if (c == '#') {
      position++;
      while (position < endOffset && buffer.charAt(position) != '\n') {
        position++;
      }
      tokenEnd = position;
      tokenType = FirTokenTypes.COMMENT;
      return;
    }

    for (var keyword : COMPOUND_KEYWORDS) {
      if (startsWith(keyword) && isBoundaryAfter(keyword)) {
        tokenEnd = position + keyword.length();
        tokenType = FirTokenTypes.KEYWORD;
        return;
      }
    }

    // A stub version body: `{ ... }`.
    if (startsWith("...")) {
      tokenEnd = position + 3;
      tokenType = FirTokenTypes.KEYWORD;
      return;
    }

    // `-fx>` in a version header or call signature: effects are `-`, `~`, or `+`.
    if (startsWith("-->") || startsWith("-+>") || startsWith("-~>")) {
      tokenEnd = position + 3;
      tokenType = FirTokenTypes.ARROW;
      return;
    }

    // Assumptions: `a ?: t`, `a ?= c`, `a ?- f`.
    if (startsWith("?:") || startsWith("?=") || startsWith("?-")) {
      tokenEnd = position + 2;
      tokenType = FirTokenTypes.OPERATOR;
      return;
    }

    if (c == '"') {
      readQuoted('"');
      tokenType = FirTokenTypes.STRING;
      return;
    }

    if (c == '<' && isSexpLiteralStart()) {
      readSexpLiteral();
      tokenType = FirTokenTypes.SEXP;
      return;
    }

    if (c == '`') {
      readQuoted('`');
      tokenType = FirTokenTypes.BACKTICK_IDENTIFIER;
      return;
    }

    if (isNumberStart(c)) {
      readNumber();
      tokenType = FirTokenTypes.NUMBER;
      return;
    }

    if (isIdentifierStart(c)) {
      readIdentifier();
      return;
    }

    tokenEnd = position + 1;
    tokenType =
        switch (c) {
          case '(', ')' -> FirTokenTypes.PAREN;
          case '{', '}' -> FirTokenTypes.BRACE;
          case '[', ']' -> FirTokenTypes.BRACKET;
          case ',' -> FirTokenTypes.COMMA;
          case ':' -> FirTokenTypes.COLON;
          case ';' -> FirTokenTypes.SEMICOLON;
          case '*' -> FirTokenTypes.TYPE;
          case '+', '-', '=', '<', '>', '%', '$', '~', '@', '!', '?' -> FirTokenTypes.OPERATOR;
          default -> TokenType.BAD_CHARACTER;
        };
  }

  private boolean startsWith(String expected) {
    var expectedLength = expected.length();
    if (position + expectedLength > endOffset) {
      return false;
    }
    for (var i = 0; i < expectedLength; i++) {
      if (buffer.charAt(position + i) != expected.charAt(i)) {
        return false;
      }
    }
    return true;
  }

  /**
   * Whether {@code keyword} (assumed to start at {@link #position}) isn't merely a prefix of a
   * longer identifier. Only matters when the keyword ends in an identifier character.
   */
  private boolean isBoundaryAfter(String keyword) {
    var last = keyword.charAt(keyword.length() - 1);
    if (!isIdentifierPart(last)) {
      return true;
    }
    var index = position + keyword.length();
    return index >= endOffset || !isIdentifierPart(buffer.charAt(index));
  }

  private void readQuoted(char quote) {
    position++;
    var escaped = false;
    while (position < endOffset) {
      var c = buffer.charAt(position);
      if (escaped) {
        escaped = false;
        position++;
        continue;
      }
      if (c == '\\') {
        escaped = true;
        position++;
        continue;
      }
      if (c == quote) {
        position++;
        break;
      }
      position++;
    }
    tokenEnd = position;
  }

  /**
   * Whether the `<` at {@link #position} opens a boxed SEXP literal (`<int 42>`, `<sym x>`,
   * `<lang f(x)>`, `<missing>`, ...) rather than a call signature (`f< I --> I >(...)`, whose `<`
   * is followed by a space or a type) or a promise header (`prom<V +>{`).
   */
  private boolean isSexpLiteralStart() {
    if (position + 1 >= endOffset || !Character.isLowerCase(buffer.charAt(position + 1))) {
      return false;
    }
    // `prom<` / `prom-<`: the type inside starts with a lowercase letter too (`v(`, `v1(`, `p(`).
    return !precededBy("prom") && !precededBy("prom-");
  }

  private boolean precededBy(String text) {
    var start = position - text.length();
    if (start < 0) {
      return false;
    }
    for (var i = 0; i < text.length(); i++) {
      if (buffer.charAt(start + i) != text.charAt(i)) {
        return false;
      }
    }
    return true;
  }

  /**
   * Reads a `<...>` SEXP literal as one token. The contents are R-ish syntax, so nested `<...>`,
   * quoted strings, and backtick names (which may be `>` themselves) are skipped over rather than
   * interpreted; the token ends at the matching `>` or the end of the line.
   */
  private void readSexpLiteral() {
    var depth = 0;
    while (position < endOffset) {
      var c = buffer.charAt(position);
      if (c == '\n') {
        break;
      }
      if (c == '"' || c == '`') {
        readQuoted(c);
        continue;
      }
      position++;
      if (c == '<') {
        depth++;
      } else if (c == '>') {
        depth--;
        if (depth == 0) {
          break;
        }
      }
    }
    tokenEnd = position;
  }

  private boolean isNumberStart(char c) {
    if (Character.isDigit(c)) {
      return true;
    }
    return (c == '-' || c == '+')
        && position + 1 < endOffset
        && Character.isDigit(buffer.charAt(position + 1));
  }

  /** Reads an unboxed number: an integer, or a real with a decimal point and/or exponent. */
  private void readNumber() {
    if (buffer.charAt(position) == '-' || buffer.charAt(position) == '+') {
      position++;
    }
    readDigits();
    if (position < endOffset && buffer.charAt(position) == '.') {
      position++;
      readDigits();
    }
    if (position < endOffset
        && (buffer.charAt(position) == 'e' || buffer.charAt(position) == 'E')) {
      var save = position;
      position++;
      if (position < endOffset
          && (buffer.charAt(position) == '-' || buffer.charAt(position) == '+')) {
        position++;
      }
      if (position < endOffset && Character.isDigit(buffer.charAt(position))) {
        readDigits();
      } else {
        position = save;
      }
    }
    tokenEnd = position;
  }

  private void readDigits() {
    while (position < endOffset && Character.isDigit(buffer.charAt(position))) {
      position++;
    }
  }

  private static boolean isIdentifierStart(char c) {
    return Character.isLetter(c) || c == '_';
  }

  private static boolean isIdentifierPart(char c) {
    return Character.isLetterOrDigit(c) || c == '_';
  }

  private void readIdentifier() {
    position++;
    while (position < endOffset && isIdentifierPart(buffer.charAt(position))) {
      position++;
    }
    tokenEnd = position;

    var text = buffer.subSequence(tokenStart, tokenEnd).toString();
    if (KEYWORDS.contains(text)) {
      tokenType = FirTokenTypes.KEYWORD;
    } else if (CONSTANTS.contains(text)) {
      tokenType = FirTokenTypes.CONSTANT;
    } else if (TYPE_NAMES.contains(text)
        || (APPLIED_TYPE_NAMES.contains(text) && isApplied(tokenEnd))) {
      tokenType = FirTokenTypes.TYPE;
    } else {
      tokenType = FirTokenTypes.IDENTIFIER;
    }
  }

  /** Whether the text at {@code index} is `(`, `?(`, or `[` (ignoring nothing: no spaces). */
  private boolean isApplied(int index) {
    if (index >= endOffset) {
      return false;
    }
    var c = buffer.charAt(index);
    if (c == '(' || c == '[') {
      return true;
    }
    return c == '?' && index + 1 < endOffset && buffer.charAt(index + 1) == '(';
  }
}
