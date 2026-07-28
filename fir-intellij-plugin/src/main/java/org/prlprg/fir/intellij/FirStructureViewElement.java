package org.prlprg.fir.intellij;

import com.intellij.ide.structureView.StructureViewTreeElement;
import com.intellij.ide.util.treeView.smartTree.SortableTreeElement;
import com.intellij.ide.util.treeView.smartTree.TreeElement;
import com.intellij.navigation.ItemPresentation;
import com.intellij.psi.NavigatablePsiElement;
import com.intellij.psi.PsiElement;
import com.intellij.psi.PsiNamedElement;
import com.intellij.psi.util.PsiTreeUtil;
import javax.swing.Icon;
import org.jetbrains.annotations.NotNull;
import org.jetbrains.annotations.Nullable;

public final class FirStructureViewElement
    implements StructureViewTreeElement, SortableTreeElement {
  private final PsiElement element;

  public FirStructureViewElement(@NotNull PsiElement element) {
    this.element = element;
  }

  @Override
  public Object getValue() {
    return element;
  }

  @Override
  public void navigate(boolean requestFocus) {
    if (element instanceof NavigatablePsiElement nav) nav.navigate(requestFocus);
  }

  @Override
  public boolean canNavigate() {
    return element instanceof NavigatablePsiElement nav && nav.canNavigate();
  }

  @Override
  public boolean canNavigateToSource() {
    return element instanceof NavigatablePsiElement nav && nav.canNavigateToSource();
  }

  @Override
  public @NotNull String getAlphaSortKey() {
    if (element instanceof PsiNamedElement named) {
      var name = named.getName();
      if (name != null) return name;
    }
    return "";
  }

  @Override
  public @NotNull ItemPresentation getPresentation() {
    if (element instanceof NavigatablePsiElement nav) {
      var pres = nav.getPresentation();
      if (pres != null) return pres;
    }
    return new ItemPresentation() {
      @Override
      public @Nullable String getPresentableText() {
        return element instanceof PsiNamedElement named ? named.getName() : "";
      }

      @Override
      public @Nullable Icon getIcon(boolean unused) {
        return null;
      }
    };
  }

  @Override
  public TreeElement @NotNull [] getChildren() {
    if (element instanceof FirFile file) {
      return PsiTreeUtil.getChildrenOfTypeAsList(file, FirFunDeclaration.class).stream()
          .map(FirStructureViewElement::new)
          .toArray(TreeElement[]::new);
    }
    if (element instanceof FirFunDeclaration fun) {
      return PsiTreeUtil.getChildrenOfTypeAsList(fun, FirVersion.class).stream()
          .map(FirStructureViewElement::new)
          .toArray(TreeElement[]::new);
    }
    return new TreeElement[0];
  }
}
