package org.prlprg.fir.intellij;

import com.intellij.extapi.psi.ASTWrapperPsiElement;
import com.intellij.lang.ASTNode;
import com.intellij.navigation.ItemPresentation;
import com.intellij.util.PlatformIcons;
import javax.swing.Icon;
import org.jetbrains.annotations.NotNull;
import org.jetbrains.annotations.Nullable;

/** PSI element for a FIR function version ({@code (params) -fx> type { body }}). */
public final class FirVersion extends ASTWrapperPsiElement {

  public FirVersion(@NotNull ASTNode node) {
    super(node);
  }

  /** Returns the version signature text (e.g. {@code (reg x:I, reg y:I) --> I}). */
  public @NotNull String getSignatureText() {
    var text = getText();
    var braceIdx = text.indexOf('{');
    return (braceIdx >= 0 ? text.substring(0, braceIdx) : text).trim();
  }

  /** Returns the containing function declaration, or {@code null} if detached. */
  public @Nullable FirFunDeclaration getContainingFunction() {
    var parent = getParent();
    return parent instanceof FirFunDeclaration fun ? fun : null;
  }

  @Override
  public @Nullable ItemPresentation getPresentation() {
    return new ItemPresentation() {
      @Override
      public @Nullable String getPresentableText() {
        return getSignatureText();
      }

      @Override
      public @Nullable Icon getIcon(boolean unused) {
        return PlatformIcons.METHOD_ICON;
      }
    };
  }
}
