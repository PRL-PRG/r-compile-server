package org.prlprg.fir.intellij;

import static org.prlprg.fir.intellij.FirTokenTypes.*;

import com.intellij.lexer.LexerBase;
import com.intellij.psi.tree.IElementType;
import java.util.Set;
import org.jetbrains.annotations.NotNull;
import org.jetbrains.annotations.Nullable;

/** Splits a {@link FirTokenTypes#SEXP} token into the parts that the highlighter colors. */
final class FirSexpLexer extends LexerBase {
  private static final Set<String> CONSTANTS =
      Set.of("TRUE", "FALSE", "NULL", "NA_LGL", "NA_INT", "NA_REAL", "NA_CPLX", "NA_STR");

  private @NotNull CharSequence buffer = "";
  private int startOffset;
  private int endOffset;
  private int tokenStart;
  private int tokenEnd;
  /** The number of open `<`, so the outermost `<` and `>` are delimiters. */
  private int depth;

  private @Nullable IElementType tokenType;

  @Override
  public void start(
      @NotNull CharSequence buffer, int startOffset, int endOffset, int initialState) {
    this.buffer = buffer;
    this.startOffset = startOffset;
    this.endOffset = endOffset;
    depth = 0;
    locateToken(startOffset);
  }

  @Override
  public void advance() {
    locateToken(tokenEnd);
  }

  private void locateToken(int start) {
    tokenStart = start;
    tokenEnd = start + 1;
    if (start >= endOffset) {
      tokenEnd = start;
      tokenType = null;
      return;
    }
    var c = buffer.charAt(start);
    var prev = start > startOffset ? buffer.charAt(start - 1) : ' ';
    tokenType =
        switch (c) {
          case '<' -> ++depth == 1 ? SEXP_DELIMITER : SEXP_TEXT;
          case '>' -> --depth == 0 ? SEXP_DELIMITER : SEXP_TEXT;
          case '"' -> {
            readQuoted(c);
            yield SEXP_STRING;
          }
          case '`' -> {
            readQuoted(c);
            yield charAt(tokenEnd) == '(' ? SEXP_CALL : SEXP_SYMBOL;
          }
          default -> {
            if (Character.isDigit(c)
                || ((c == '-' || c == '+')
                    && Character.isDigit(charAt(start + 1))
                    && !isNamePart(prev)
                    && prev != ')'
                    && prev != ']')) {
              readNumber();
              yield SEXP_NUMBER;
            }
            if (isNamePart(c)) {
              while (isNamePart(charAt(tokenEnd))) tokenEnd++;
              var name = buffer.subSequence(start, tokenEnd).toString();
              yield prev == '<'
                  ? SEXP_TYPE
                  : CONSTANTS.contains(name)
                      ? SEXP_CONSTANT
                      : charAt(tokenEnd) == '(' ? SEXP_CALL : SEXP_SYMBOL;
            }
            while (tokenEnd < endOffset
                && "<>\"`+-".indexOf(charAt(tokenEnd)) < 0
                && !isNamePart(charAt(tokenEnd))) {
              tokenEnd++;
            }
            yield SEXP_TEXT;
          }
        };
  }

  /** The character at {@code index}, or a space past the token. */
  private char charAt(int index) {
    return index < endOffset ? buffer.charAt(index) : ' ';
  }

  private static boolean isNamePart(char c) {
    return Character.isLetterOrDigit(c) || c == '.' || c == '_';
  }

  private void readQuoted(char quote) {
    while (tokenEnd < endOffset && buffer.charAt(tokenEnd) != quote) {
      tokenEnd += buffer.charAt(tokenEnd) == '\\' ? 2 : 1;
    }
    tokenEnd = Math.min(tokenEnd + 1, endOffset);
  }

  /** Reads a number with its suffix (`1.5`, `-4`, `1e-5`, `1.0i`, `2L`). */
  private void readNumber() {
    while (isNamePart(charAt(tokenEnd))
        || ("+-".indexOf(charAt(tokenEnd)) >= 0 && "eE".indexOf(charAt(tokenEnd - 1)) >= 0)) {
      tokenEnd++;
    }
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
  public @NotNull CharSequence getBufferSequence() {
    return buffer;
  }

  @Override
  public int getBufferEnd() {
    return endOffset;
  }
}
