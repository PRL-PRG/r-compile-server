package org.prlprg.fir.intellij;

import com.intellij.psi.tree.IElementType;

public final class FirTokenTypes {
  public static final IElementType KEYWORD = new FirTokenType("KEYWORD");
  public static final IElementType TYPE = new FirTokenType("TYPE");
  public static final IElementType IDENTIFIER = new FirTokenType("IDENTIFIER");
  public static final IElementType BACKTICK_IDENTIFIER = new FirTokenType("BACKTICK_IDENTIFIER");
  public static final IElementType NUMBER = new FirTokenType("NUMBER");
  public static final IElementType CONSTANT = new FirTokenType("CONSTANT");
  /** A boxed R value in delimited SEXP syntax, e.g. {@code <int 42>} or {@code <lang f(x)>}. */
  public static final IElementType SEXP = new FirTokenType("SEXP");
  public static final IElementType STRING = new FirTokenType("STRING");
  public static final IElementType COMMENT = new FirTokenType("COMMENT");
  public static final IElementType ARROW = new FirTokenType("ARROW");
  public static final IElementType OPERATOR = new FirTokenType("OPERATOR");
  public static final IElementType PAREN = new FirTokenType("PAREN");
  public static final IElementType BRACE = new FirTokenType("BRACE");
  public static final IElementType BRACKET = new FirTokenType("BRACKET");
  public static final IElementType COMMA = new FirTokenType("COMMA");
  public static final IElementType COLON = new FirTokenType("COLON");
  public static final IElementType SEMICOLON = new FirTokenType("SEMICOLON");
  /** A function or version property ({@code @strict}), or a strict parameter's {@code @!}. */
  public static final IElementType PROPERTY = new FirTokenType("PROPERTY");

  // Only the highlighting lexer produces the types below. `IDENTIFIER` is then a register.
  public static final IElementType FUNCTION_DECLARATION = new FirTokenType("FUNCTION_DECLARATION");
  public static final IElementType FUNCTION_REFERENCE = new FirTokenType("FUNCTION_REFERENCE");
  public static final IElementType VARIABLE = new FirTokenType("VARIABLE");
  public static final IElementType LABEL = new FirTokenType("LABEL");
  // The parts of a `SEXP` token.
  public static final IElementType SEXP_DELIMITER = new FirTokenType("SEXP_DELIMITER");
  public static final IElementType SEXP_TYPE = new FirTokenType("SEXP_TYPE");
  public static final IElementType SEXP_STRING = new FirTokenType("SEXP_STRING");
  public static final IElementType SEXP_NUMBER = new FirTokenType("SEXP_NUMBER");
  public static final IElementType SEXP_CONSTANT = new FirTokenType("SEXP_CONSTANT");
  public static final IElementType SEXP_CALL = new FirTokenType("SEXP_CALL");
  public static final IElementType SEXP_SYMBOL = new FirTokenType("SEXP_SYMBOL");
  public static final IElementType SEXP_TEXT = new FirTokenType("SEXP_TEXT");

  private FirTokenTypes() {}
}
