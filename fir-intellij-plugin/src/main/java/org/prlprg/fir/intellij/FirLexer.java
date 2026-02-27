package org.prlprg.fir.intellij;

import com.intellij.lexer.LexerBase;
import com.intellij.psi.TokenType;
import com.intellij.psi.tree.IElementType;
import java.util.Set;
import org.jetbrains.annotations.NotNull;
import org.jetbrains.annotations.Nullable;

public final class FirLexer extends LexerBase {
  private static final Set<String> KEYWORDS =
      Set.of(
          "fun",
          "reg",
          "var",
          "return",
          "if",
          "then",
          "else",
          "goto",
          "check",
          "deopt",
          "mkenv",
          "popenv",
          "st",
          "ld",
          "ldf",
          "prom",
          "clos",
          "dyn",
          "as",
          "use",
          "force",
          "unreachable",
          "TRUE",
          "FALSE",
          "NULL");
  private static final Set<String> TYPE_NAMES = Set.of("I", "L", "R", "S", "V", "v", "p");

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

    if (startsWith("force?") && isBoundary(position + 6)) {
      tokenEnd = position + 6;
      tokenType = FirTokenTypes.KEYWORD;
      return;
    }

    if (startsWith("...")) {
      tokenEnd = position + 3;
      tokenType = FirTokenTypes.KEYWORD;
      return;
    }

    if (startsWith("-->") || startsWith("-+>") || startsWith("-~>") || startsWith("-*>")) {
      tokenEnd = position + 3;
      tokenType = FirTokenTypes.ARROW;
      return;
    }

    if (startsWith("->")) {
      tokenEnd = position + 2;
      tokenType = FirTokenTypes.ARROW;
      return;
    }

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
          case '(',
              ')' -> FirTokenTypes.PAREN;
          case '{',
              '}' -> FirTokenTypes.BRACE;
          case '[',
              ']' -> FirTokenTypes.BRACKET;
          case ',' -> FirTokenTypes.COMMA;
          case ':' -> FirTokenTypes.COLON;
          case ';' -> FirTokenTypes.SEMICOLON;
          case '*' -> FirTokenTypes.TYPE;
          case '+', '-', '=', '<', '>', '?', '$', '|', '.', '~', '/' -> FirTokenTypes.OPERATOR;
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

  private boolean isBoundary(int index) {
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

  private boolean isNumberStart(char c) {
    if (Character.isDigit(c)) {
      return true;
    }
    return c == '-' && position + 1 < endOffset && Character.isDigit(buffer.charAt(position + 1));
  }

  private void readNumber() {
    if (buffer.charAt(position) == '-') {
      position++;
    }
    while (position < endOffset && Character.isDigit(buffer.charAt(position))) {
      position++;
    }
    if (position < endOffset && buffer.charAt(position) == '.') {
      position++;
      while (position < endOffset && Character.isDigit(buffer.charAt(position))) {
        position++;
      }
    }
    tokenEnd = position;
  }

  private static boolean isIdentifierStart(char c) {
    return Character.isLetter(c) || c == '_';
  }

  private static boolean isIdentifierPart(char c) {
    return Character.isLetterOrDigit(c) || c == '_' || c == '.';
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
      return;
    }
    if (TYPE_NAMES.contains(text)) {
      tokenType = FirTokenTypes.TYPE;
      return;
    }
    tokenType = FirTokenTypes.IDENTIFIER;
  }
}
