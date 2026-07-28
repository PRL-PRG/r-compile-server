package org.prlprg.fir.intellij;

import com.intellij.psi.tree.IElementType;

public final class FirTokenTypes {
  public static final IElementType KEYWORD = new FirTokenType("KEYWORD");
  public static final IElementType TYPE = new FirTokenType("TYPE");
  public static final IElementType IDENTIFIER = new FirTokenType("IDENTIFIER");
  public static final IElementType BACKTICK_IDENTIFIER = new FirTokenType("BACKTICK_IDENTIFIER");
  public static final IElementType NUMBER = new FirTokenType("NUMBER");
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

  private FirTokenTypes() {}
}
