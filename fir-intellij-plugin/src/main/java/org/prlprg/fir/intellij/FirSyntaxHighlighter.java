package org.prlprg.fir.intellij;

import static com.intellij.openapi.editor.colors.TextAttributesKey.createTextAttributesKey;

import com.intellij.lexer.Lexer;
import com.intellij.openapi.editor.DefaultLanguageHighlighterColors;
import com.intellij.openapi.editor.HighlighterColors;
import com.intellij.openapi.editor.colors.EditorColors;
import com.intellij.openapi.editor.colors.TextAttributesKey;
import com.intellij.openapi.fileTypes.SyntaxHighlighterBase;
import com.intellij.psi.TokenType;
import com.intellij.psi.tree.IElementType;
import java.util.Map;
import org.jetbrains.annotations.NotNull;

public final class FirSyntaxHighlighter extends SyntaxHighlighterBase {
  static final TextAttributesKey KEYWORD =
      createTextAttributesKey("FIR_KEYWORD", DefaultLanguageHighlighterColors.KEYWORD);
  static final TextAttributesKey PROPERTY =
      createTextAttributesKey("FIR_PROPERTY", DefaultLanguageHighlighterColors.METADATA);
  static final TextAttributesKey TYPE =
      createTextAttributesKey("FIR_TYPE", DefaultLanguageHighlighterColors.CLASS_NAME);
  static final TextAttributesKey REGISTER =
      createTextAttributesKey("FIR_IDENTIFIER", DefaultLanguageHighlighterColors.IDENTIFIER);
  static final TextAttributesKey VARIABLE =
      createTextAttributesKey("FIR_VARIABLE", DefaultLanguageHighlighterColors.INSTANCE_FIELD);
  static final TextAttributesKey FUNCTION_DECLARATION =
      createTextAttributesKey(
          "FIR_FUNCTION_DECLARATION", DefaultLanguageHighlighterColors.FUNCTION_DECLARATION);
  static final TextAttributesKey FUNCTION_CALL =
      createTextAttributesKey("FIR_FUNCTION_CALL", DefaultLanguageHighlighterColors.FUNCTION_CALL);
  static final TextAttributesKey LABEL =
      createTextAttributesKey("FIR_LABEL", DefaultLanguageHighlighterColors.LABEL);
  static final TextAttributesKey NUMBER =
      createTextAttributesKey("FIR_NUMBER", DefaultLanguageHighlighterColors.NUMBER);
  static final TextAttributesKey CONSTANT =
      createTextAttributesKey("FIR_CONSTANT", DefaultLanguageHighlighterColors.CONSTANT);
  static final TextAttributesKey STRING =
      createTextAttributesKey("FIR_STRING", DefaultLanguageHighlighterColors.STRING);
  /** The background of a SEXP literal, without its outermost `<` and `>`. */
  static final TextAttributesKey SEXP =
      createTextAttributesKey("FIR_SEXP", EditorColors.INJECTED_LANGUAGE_FRAGMENT);
  static final TextAttributesKey SEXP_DELIMITER =
      createTextAttributesKey("FIR_SEXP_DELIMITER", DefaultLanguageHighlighterColors.BRACKETS);
  static final TextAttributesKey COMMENT =
      createTextAttributesKey("FIR_COMMENT", DefaultLanguageHighlighterColors.LINE_COMMENT);
  static final TextAttributesKey OPERATOR =
      createTextAttributesKey("FIR_OPERATOR", DefaultLanguageHighlighterColors.OPERATION_SIGN);
  static final TextAttributesKey BRACKETS =
      createTextAttributesKey("FIR_BRACKETS", DefaultLanguageHighlighterColors.BRACKETS);
  static final TextAttributesKey PARENTHESES =
      createTextAttributesKey("FIR_PARENTHESES", DefaultLanguageHighlighterColors.PARENTHESES);
  static final TextAttributesKey BRACES =
      createTextAttributesKey("FIR_BRACES", DefaultLanguageHighlighterColors.BRACES);
  static final TextAttributesKey PUNCTUATION =
      createTextAttributesKey("FIR_PUNCTUATION", DefaultLanguageHighlighterColors.COMMA);
  static final TextAttributesKey BAD_CHAR =
      createTextAttributesKey("FIR_BAD_CHAR", HighlighterColors.BAD_CHARACTER);

  private static final Map<IElementType, TextAttributesKey[]> HIGHLIGHTS =
      Map.ofEntries(
          Map.entry(FirTokenTypes.KEYWORD, pack(KEYWORD)),
          Map.entry(FirTokenTypes.PROPERTY, pack(PROPERTY)),
          Map.entry(FirTokenTypes.TYPE, pack(TYPE)),
          Map.entry(FirTokenTypes.IDENTIFIER, pack(REGISTER)),
          Map.entry(FirTokenTypes.BACKTICK_IDENTIFIER, pack(REGISTER)),
          Map.entry(FirTokenTypes.VARIABLE, pack(VARIABLE)),
          Map.entry(FirTokenTypes.FUNCTION_DECLARATION, pack(FUNCTION_DECLARATION)),
          Map.entry(FirTokenTypes.FUNCTION_REFERENCE, pack(FUNCTION_CALL)),
          Map.entry(FirTokenTypes.LABEL, pack(LABEL)),
          Map.entry(FirTokenTypes.NUMBER, pack(NUMBER)),
          Map.entry(FirTokenTypes.CONSTANT, pack(CONSTANT)),
          Map.entry(FirTokenTypes.STRING, pack(STRING)),
          Map.entry(FirTokenTypes.COMMENT, pack(COMMENT)),
          Map.entry(FirTokenTypes.OPERATOR, pack(OPERATOR)),
          Map.entry(FirTokenTypes.ARROW, pack(OPERATOR)),
          Map.entry(FirTokenTypes.BRACKET, pack(BRACKETS)),
          Map.entry(FirTokenTypes.PAREN, pack(PARENTHESES)),
          Map.entry(FirTokenTypes.BRACE, pack(BRACES)),
          Map.entry(FirTokenTypes.COMMA, pack(PUNCTUATION)),
          Map.entry(FirTokenTypes.COLON, pack(PUNCTUATION)),
          Map.entry(FirTokenTypes.SEMICOLON, pack(PUNCTUATION)),
          Map.entry(TokenType.BAD_CHARACTER, pack(BAD_CHAR)),
          Map.entry(FirTokenTypes.SEXP_DELIMITER, pack(SEXP_DELIMITER)),
          Map.entry(FirTokenTypes.SEXP_TYPE, pack(SEXP, TYPE)),
          Map.entry(FirTokenTypes.SEXP_STRING, pack(SEXP, STRING)),
          Map.entry(FirTokenTypes.SEXP_NUMBER, pack(SEXP, NUMBER)),
          Map.entry(FirTokenTypes.SEXP_CONSTANT, pack(SEXP, CONSTANT)),
          Map.entry(FirTokenTypes.SEXP_CALL, pack(SEXP, FUNCTION_CALL)),
          Map.entry(FirTokenTypes.SEXP_SYMBOL, pack(SEXP, REGISTER)),
          Map.entry(FirTokenTypes.SEXP_TEXT, pack(SEXP)));

  @Override
  public @NotNull Lexer getHighlightingLexer() {
    return new FirHighlightingLexer();
  }

  @Override
  public TextAttributesKey @NotNull [] getTokenHighlights(@NotNull IElementType tokenType) {
    return HIGHLIGHTS.getOrDefault(tokenType, TextAttributesKey.EMPTY_ARRAY);
  }
}
