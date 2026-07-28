package org.prlprg.fir.intellij;

import com.intellij.lexer.Lexer;
import com.intellij.openapi.editor.DefaultLanguageHighlighterColors;
import com.intellij.openapi.editor.HighlighterColors;
import com.intellij.openapi.editor.colors.TextAttributesKey;
import com.intellij.openapi.fileTypes.SyntaxHighlighterBase;
import com.intellij.psi.TokenType;
import com.intellij.psi.tree.IElementType;
import org.jetbrains.annotations.NotNull;

public final class FirSyntaxHighlighter extends SyntaxHighlighterBase {
  private static final TextAttributesKey KEYWORD =
      TextAttributesKey.createTextAttributesKey(
          "FIR_KEYWORD", DefaultLanguageHighlighterColors.KEYWORD);
  private static final TextAttributesKey TYPE =
      TextAttributesKey.createTextAttributesKey("FIR_TYPE", DefaultLanguageHighlighterColors.CLASS_NAME);
  private static final TextAttributesKey IDENTIFIER =
      TextAttributesKey.createTextAttributesKey(
          "FIR_IDENTIFIER", DefaultLanguageHighlighterColors.IDENTIFIER);
  private static final TextAttributesKey NUMBER =
      TextAttributesKey.createTextAttributesKey("FIR_NUMBER", DefaultLanguageHighlighterColors.NUMBER);
  private static final TextAttributesKey STRING =
      TextAttributesKey.createTextAttributesKey("FIR_STRING", DefaultLanguageHighlighterColors.STRING);
  private static final TextAttributesKey COMMENT =
      TextAttributesKey.createTextAttributesKey(
          "FIR_COMMENT", DefaultLanguageHighlighterColors.LINE_COMMENT);
  private static final TextAttributesKey OPERATOR =
      TextAttributesKey.createTextAttributesKey(
          "FIR_OPERATOR", DefaultLanguageHighlighterColors.OPERATION_SIGN);
  private static final TextAttributesKey BRACKETS =
      TextAttributesKey.createTextAttributesKey(
          "FIR_BRACKETS", DefaultLanguageHighlighterColors.BRACKETS);
  private static final TextAttributesKey PARENTHESES =
      TextAttributesKey.createTextAttributesKey(
          "FIR_PARENTHESES", DefaultLanguageHighlighterColors.PARENTHESES);
  private static final TextAttributesKey BRACES =
      TextAttributesKey.createTextAttributesKey("FIR_BRACES", DefaultLanguageHighlighterColors.BRACES);
  private static final TextAttributesKey PUNCTUATION =
      TextAttributesKey.createTextAttributesKey("FIR_PUNCTUATION", DefaultLanguageHighlighterColors.COMMA);
  private static final TextAttributesKey BAD_CHAR =
      TextAttributesKey.createTextAttributesKey("FIR_BAD_CHAR", HighlighterColors.BAD_CHARACTER);

  @Override
  public @NotNull Lexer getHighlightingLexer() {
    return new FirLexer();
  }

  @Override
  public TextAttributesKey @NotNull [] getTokenHighlights(@NotNull IElementType tokenType) {
    if (tokenType == FirTokenTypes.KEYWORD) {
      return pack(KEYWORD);
    }
    if (tokenType == FirTokenTypes.TYPE) {
      return pack(TYPE);
    }
    if (tokenType == FirTokenTypes.IDENTIFIER || tokenType == FirTokenTypes.BACKTICK_IDENTIFIER) {
      return pack(IDENTIFIER);
    }
    if (tokenType == FirTokenTypes.NUMBER) {
      return pack(NUMBER);
    }
    if (tokenType == FirTokenTypes.STRING) {
      return pack(STRING);
    }
    if (tokenType == FirTokenTypes.COMMENT) {
      return pack(COMMENT);
    }
    if (tokenType == FirTokenTypes.OPERATOR || tokenType == FirTokenTypes.ARROW) {
      return pack(OPERATOR);
    }
    if (tokenType == FirTokenTypes.BRACKET) {
      return pack(BRACKETS);
    }
    if (tokenType == FirTokenTypes.PAREN) {
      return pack(PARENTHESES);
    }
    if (tokenType == FirTokenTypes.BRACE) {
      return pack(BRACES);
    }
    if (tokenType == FirTokenTypes.COMMA
        || tokenType == FirTokenTypes.COLON
        || tokenType == FirTokenTypes.SEMICOLON) {
      return pack(PUNCTUATION);
    }
    if (tokenType == TokenType.BAD_CHARACTER) {
      return pack(BAD_CHAR);
    }
    return TextAttributesKey.EMPTY_ARRAY;
  }
}
