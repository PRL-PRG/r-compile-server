package org.prlprg.fir.intellij;

import static org.prlprg.fir.intellij.FirLexer.*;
import static org.prlprg.fir.intellij.FirTokenTypes.*;

import com.intellij.lexer.LayeredLexer;
import com.intellij.psi.tree.IElementType;
import org.jetbrains.annotations.Nullable;

/**
 * The lexer of {@link FirSyntaxHighlighter}. It splits SEXP literals into parts, and classifies
 * identifiers by the line context in the state of {@link FirLexer} and by the next characters.
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
    // The context at the start of this token (`LayeredLexer#getState` is the layered state).
    var context = getDelegate().getState();
    var prev = context & PREV;
    var next = charAt(getTokenEnd());
    return switch (prev) {
      case ENV -> type;
      case FUN -> FUNCTION_DECLARATION;
      case FUNREF -> FUNCTION_REFERENCE;
      default -> {
        if (next == '<' || next == '%' || next == '@') yield FUNCTION_REFERENCE;
        if (prev == VAR
            || (context & (FUN_LINE | ARGS_DYN)) != 0
            || ((context & ARGS_DOTS) != 0 && isBeforeAssignment())) {
          yield VARIABLE;
        }
        yield next == '(' && prev != DYN ? LABEL : type;
      }
    };
  }

  /** Whether `=` (not `==`) follows the token, after spaces: a {@code dots[x = a]} name. */
  private boolean isBeforeAssignment() {
    var i = getTokenEnd();
    while (charAt(i) == ' ') i++;
    return charAt(i) == '=' && charAt(i + 1) != '=';
  }

  private char charAt(int index) {
    return index < getBufferEnd() ? getBufferSequence().charAt(index) : '\n';
  }
}
