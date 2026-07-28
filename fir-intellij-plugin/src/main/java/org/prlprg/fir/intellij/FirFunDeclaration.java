package org.prlprg.fir.intellij;

import com.intellij.extapi.psi.ASTWrapperPsiElement;
import com.intellij.lang.ASTNode;
import com.intellij.navigation.ItemPresentation;
import com.intellij.openapi.util.NlsSafe;
import com.intellij.psi.PsiElement;
import com.intellij.psi.PsiNameIdentifierOwner;
import com.intellij.psi.TokenType;
import com.intellij.util.IncorrectOperationException;
import com.intellij.util.PlatformIcons;
import javax.swing.Icon;
import org.jetbrains.annotations.NotNull;
import org.jetbrains.annotations.Nullable;

/** PSI element for a FIR function declaration ({@code fun name(params) { versions }}). */
public final class FirFunDeclaration extends ASTWrapperPsiElement
    implements PsiNameIdentifierOwner {

  public FirFunDeclaration(@NotNull ASTNode node) {
    super(node);
  }

  @Override
  public @Nullable @NlsSafe String getName() {
    var ident = getNameIdentifier();
    return ident != null ? ident.getText() : null;
  }

  @Override
  public @Nullable PsiElement getNameIdentifier() {
    var foundFun = false;
    for (var child = getNode().getFirstChildNode(); child != null; child = child.getTreeNext()) {
      if (!foundFun) {
        if (child.getElementType() == FirTokenTypes.KEYWORD && "fun".equals(child.getText())) {
          foundFun = true;
        }
        continue;
      }
      var type = child.getElementType();
      if (type == FirTokenTypes.IDENTIFIER) {
        return child.getPsi();
      }
      if (type != TokenType.WHITE_SPACE && type != FirTokenTypes.COMMENT) {
        break;
      }
    }
    return null;
  }

  @Override
  public PsiElement setName(@NotNull String name) throws IncorrectOperationException {
    throw new IncorrectOperationException("Rename is not supported for FIR functions");
  }

  /** Returns the header text before the function body (e.g. {@code fun main()}). */
  public @NotNull String getHeaderText() {
    var text = getText();
    var braceIdx = text.indexOf('{');
    return (braceIdx >= 0 ? text.substring(0, braceIdx) : text).trim();
  }

  @Override
  public @Nullable ItemPresentation getPresentation() {
    return new ItemPresentation() {
      @Override
      public @Nullable String getPresentableText() {
        return getHeaderText();
      }

      @Override
      public @Nullable Icon getIcon(boolean unused) {
        return PlatformIcons.FUNCTION_ICON;
      }
    };
  }
}
