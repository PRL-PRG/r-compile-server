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
          "consume",
          "in");

  /** Keywords without an operand. Any other keyword before `;`, `,`, `)` or `]` is a register. */
  private static final Set<String> NULLARY_KEYWORDS =
      Set.of("noop", "mkenv", "popenv", "unreachable");

  /**
   * Keywords that contain non-identifier characters, so they must be matched before identifiers
   * are read. Longer forms come first so that e.g. {@code ldf-glob} wins over {@code ldf}.
   */
  private static final List<String> COMPOUND_KEYWORDS =
      List.of(
          "clos-static",
          "ldf-glob",
          "ldf-base",
          "ld-super",
          "st-super",
          "mkenv~",
          "mkenv-",
          "force?",
          "prom-");

  /** Function and version properties. Only whitespace precedes them on their line. */
  private static final List<String> PROPERTIES =
      List.of(
          "@strict",
          "@liteSpecial",
          "@readsContext",
          "@needsContext",
          "@readsPromise",
          "@needsPromises",
          "@signals");

  /**
   * The keywords and operators that a name follows (an R variable or function name). The printer
   * doesn't backquote such a name when it's spelled like a keyword or type (`ld check`).
   */
  static final Set<String> NAME_PREFIXES =
      Set.of(
          "fun", "ld", "ld-super", "ldf", "ldf-glob", "ldf-base", "st", "st-super", "clos",
          "clos-static", "?-", "$");

  /** Constant literals that are identifiers. */
  private static final Set<String> CONSTANTS =
      Set.of("TRUE", "FALSE", "TRUE_LGL", "FALSE_LGL", "NA_LGL", "NA_INT", "NA_REAL", "NA_STR");

  /** Type kinds that are always types. */
  private static final Set<String> TYPE_NAMES =
      Set.of("I", "L", "R", "S", "V", "B", "cls", "miss", "dots");

  /**
   * Names that are types (or vector constructors) only when applied: {@code v(I)}, {@code v1(I)},
   * {@code p(V +)}, {@code p?(V +)}. Otherwise they're ordinary register names.
   */
  private static final Set<String> APPLIED_TYPE_NAMES = Set.of("v", "v1", "p");

  /** The ownerships of a vector type, directly after its `)`: {@code v(I)o}. */
  private static final Set<String> OWNERSHIPS = Set.of("s", "o", "b", "f");

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

    if (startsWith("@!")) {
      tokenEnd = position + 2;
      tokenType = FirTokenTypes.PROPERTY;
      return;
    }
    for (var property : PROPERTIES) {
      if (startsWith(property) && isBoundaryAfter(property) && isFirstOnLine(buffer, position)) {
        tokenEnd = position + property.length();
        tokenType = FirTokenTypes.PROPERTY;
        return;
      }
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
   * interpreted. The token ends at the matching `>`. So that an unclosed literal doesn't swallow
   * the rest of the file, it also ends at a newline outside R brackets, unless an attribute line
   * (`| names=...` or `, dim=...`) follows the newline.
   */
  private void readSexpLiteral() {
    var angles = 0;
    var brackets = 0;
    while (position < endOffset) {
      var c = buffer.charAt(position);
      if (c == '\n' && brackets <= 0 && !sexpContinuesAt(position)) {
        break;
      }
      if (c == '"' || c == '`') {
        readQuoted(c);
        continue;
      }
      position++;
      switch (c) {
        case '<' -> angles++;
        case '>' -> {
          if (--angles == 0) {
            tokenEnd = position;
            return;
          }
        }
        case '(', '[', '{' -> brackets++;
        case ')', ']', '}' -> brackets--;
        default -> {}
      }
    }
    tokenEnd = position;
  }

  private boolean sexpContinuesAt(int newline) {
    var next = newline;
    while (next < endOffset && Character.isWhitespace(buffer.charAt(next))) next++;
    return next < endOffset && (buffer.charAt(next) == '|' || buffer.charAt(next) == ',');
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

  static boolean isIdentifierPart(char c) {
    return Character.isLetterOrDigit(c) || c == '_';
  }

  private void readIdentifier() {
    position++;
    while (position < endOffset && isIdentifierPart(buffer.charAt(position))) {
      position++;
    }
    tokenEnd = position;

    var text = buffer.subSequence(tokenStart, tokenEnd).toString();
    var before = wordBefore(buffer, tokenStart);
    if (NAME_PREFIXES.contains(before)
        || before.equals("dyn")
        || isDefinedAt(tokenEnd)
        || (KEYWORDS.contains(text) && !NULLARY_KEYWORDS.contains(text) && isOperandAt(tokenEnd))) {
      tokenType = FirTokenTypes.IDENTIFIER;
    } else if (KEYWORDS.contains(text)) {
      tokenType = FirTokenTypes.KEYWORD;
    } else if (CONSTANTS.contains(text)) {
      tokenType = FirTokenTypes.CONSTANT;
    } else if (TYPE_NAMES.contains(text)
        || (APPLIED_TYPE_NAMES.contains(text) && isApplied(tokenEnd))
        || (OWNERSHIPS.contains(text) && tokenStart > 0 && buffer.charAt(tokenStart - 1) == ')')) {
      tokenType = FirTokenTypes.TYPE;
    } else {
      tokenType = FirTokenTypes.IDENTIFIER;
    }
  }

  /** Whether a word that ends at {@code index} is defined there (a `:` follows: `dots: dots`). */
  private boolean isDefinedAt(int index) {
    return index < endOffset && buffer.charAt(index) == ':';
  }

  /** Whether a word that ends at {@code index} is an operand (`;`, `,`, `)` or `]` follows). */
  private boolean isOperandAt(int index) {
    while (index < endOffset && (buffer.charAt(index) == ' ' || buffer.charAt(index) == '\t')) {
      index++;
    }
    return index < endOffset && ";,)]".indexOf(buffer.charAt(index)) >= 0;
  }

  /**
   * The word or operator before {@code offset}, skipping spaces and tabs: a word with at most one
   * `-` (`ld`, `ld-super`), `?-`, `$`, or "". Scans the buffer, so it works from any restart.
   */
  static String wordBefore(CharSequence buffer, int offset) {
    var end = offset;
    while (end > 0 && (buffer.charAt(end - 1) == ' ' || buffer.charAt(end - 1) == '\t')) {
      end--;
    }
    if (end > 0 && buffer.charAt(end - 1) == '$') {
      return "$";
    }
    if (end > 1 && buffer.charAt(end - 1) == '-' && buffer.charAt(end - 2) == '?') {
      return "?-";
    }
    var start = wordStart(buffer, end);
    if (start > 1
        && buffer.charAt(start - 1) == '-'
        && isIdentifierPart(buffer.charAt(start - 2))) {
      start = wordStart(buffer, start - 1);
    }
    return buffer.subSequence(start, end).toString();
  }

  static int wordStart(CharSequence buffer, int end) {
    while (end > 0 && isIdentifierPart(buffer.charAt(end - 1))) {
      end--;
    }
    return end;
  }

  /** Whether only whitespace precedes {@code offset} on its line. */
  static boolean isFirstOnLine(CharSequence buffer, int offset) {
    for (var i = offset - 1; i >= 0 && buffer.charAt(i) != '\n'; i--) {
      if (!Character.isWhitespace(buffer.charAt(i))) {
        return false;
      }
    }
    return true;
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
