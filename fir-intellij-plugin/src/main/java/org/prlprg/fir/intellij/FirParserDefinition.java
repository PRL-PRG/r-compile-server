package org.prlprg.fir.intellij;

import com.intellij.lang.ASTNode;
import com.intellij.lang.ParserDefinition;
import com.intellij.lang.PsiParser;
import com.intellij.lexer.Lexer;
import com.intellij.openapi.project.Project;
import com.intellij.extapi.psi.ASTWrapperPsiElement;
import com.intellij.psi.FileViewProvider;
import com.intellij.psi.PsiElement;
import com.intellij.psi.PsiFile;
import com.intellij.psi.tree.IFileElementType;
import com.intellij.psi.tree.TokenSet;
import org.jetbrains.annotations.NotNull;

public final class FirParserDefinition implements ParserDefinition {
  public static final IFileElementType FILE = new IFileElementType(FirLanguage.INSTANCE);
  private static final TokenSet COMMENTS = TokenSet.create(FirTokenTypes.COMMENT);
  private static final TokenSet STRINGS = TokenSet.create(FirTokenTypes.STRING);

  @Override
  public @NotNull Lexer createLexer(Project project) {
    return new FirLexer();
  }

  @Override
  public @NotNull PsiParser createParser(Project project) {
    return new FirParser();
  }

  @Override
  public @NotNull IFileElementType getFileNodeType() {
    return FILE;
  }

  @Override
  public @NotNull TokenSet getCommentTokens() {
    return COMMENTS;
  }

  @Override
  public @NotNull TokenSet getStringLiteralElements() {
    return STRINGS;
  }

  @Override
  public @NotNull PsiElement createElement(ASTNode node) {
    return new ASTWrapperPsiElement(node);
  }

  @Override
  public @NotNull PsiFile createFile(@NotNull FileViewProvider viewProvider) {
    return new FirFile(viewProvider);
  }

  @Override
  public @NotNull SpaceRequirements spaceExistenceTypeBetweenTokens(
      ASTNode left, ASTNode right) {
    return SpaceRequirements.MAY;
  }
}
