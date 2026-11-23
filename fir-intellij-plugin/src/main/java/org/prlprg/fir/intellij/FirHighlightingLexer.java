package org.prlprg.fir.intellij;

import static org.prlprg.fir.intellij.FirTokenTypes.*;

import com.intellij.lexer.LayeredLexer;
import com.intellij.psi.tree.IElementType;
import org.jetbrains.annotations.Nullable;

/**
 * The lexer of {@link FirSyntaxHighlighter}. It splits SEXP literals into parts, and classifies
 * identifiers by their context. It reads the context from the buffer, so it keeps no state.
 */
public final class FirHighlightingLexer extends LayeredLexer {
  public FirHighlightingLexer() {
    super(new FirLexer());
    registerLayer(new FirSexpLexer(), SEXP);
  }

  @Override
  public @Nullable IElementType getTokenType() {
    var type = super.getTokenType();
    if (type != IDENTIFIER && type != BACKTICK_IDENTIFIER) {
      return type;
    }
    var buffer = getBufferSequence();
    var start = getTokenStart();
    var next = getTokenEnd() < getBufferEnd() ? buffer.charAt(getTokenEnd()) : ' ';
    var before = FirLexer.wordBefore(buffer, start);
    if (start > 0 && buffer.charAt(start - 1) == '@') {
      return type; // An environment argument.
    }
    return switch (before) {
      case "fun" -> FUNCTION_DECLARATION;
      case "clos", "clos-static", "?-" -> FUNCTION_REFERENCE;
      default -> {
        if (next == '<' || next == '%' || next == '@') yield FUNCTION_REFERENCE;
        if (FirLexer.NAME_PREFIXES.contains(before)
            || isFunLine(buffer, start)
            || isArgumentName(buffer, start, getTokenEnd(), getBufferEnd())) {
          yield VARIABLE;
        }
        yield next == '(' && !before.equals("dyn") ? LABEL : type;
      }
    };
  }

  /**
   * Whether the identifier at {@code start..end} names an argument: before the `=` of a {@code
   * dots[x = a]} element, or in a {@code dyn f[x, y]} list.
   */
  private static boolean isArgumentName(CharSequence buffer, int start, int end, int bufferEnd) {
    var i = start;
    while (i > 0 && buffer.charAt(i - 1) == ' ') i--;
    while (end < bufferEnd && buffer.charAt(end) == ' ') end++;
    if (i > 0
        && "[,".indexOf(buffer.charAt(i - 1)) >= 0
        && end + 1 < bufferEnd
        && buffer.charAt(end) == '='
        && buffer.charAt(end + 1) != '=') {
      return true;
    }
    while (i > 0
        && (FirLexer.isIdentifierPart(buffer.charAt(i - 1))
            || ", `.".indexOf(buffer.charAt(i - 1)) >= 0)) {
      i--;
    }
    if (i == 0 || buffer.charAt(i - 1) != '[') {
      return false;
    }
    var closure = FirLexer.wordStart(buffer, i - 1);
    return closure < i - 1 && FirLexer.wordBefore(buffer, closure).equals("dyn");
  }

  /** Whether the line of {@code offset} starts with `fun` (so an identifier on it is a formal). */
  private static boolean isFunLine(CharSequence buffer, int offset) {
    var i = offset;
    while (i > 0 && buffer.charAt(i - 1) != '\n') i--;
    while (Character.isWhitespace(buffer.charAt(i))) i++;
    return i + 3 < offset
        && buffer.subSequence(i, i + 3).toString().equals("fun")
        && !FirLexer.isIdentifierPart(buffer.charAt(i + 3));
  }
}
