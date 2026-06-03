package org.prlprg.fir.intellij;

import com.intellij.lang.Language;
import com.intellij.psi.PsiElement;
import com.intellij.ui.breadcrumbs.BreadcrumbsProvider;
import org.jetbrains.annotations.NotNull;

public final class FirBreadcrumbsProvider implements BreadcrumbsProvider {
  @Override
  public Language @NotNull [] getLanguages() {
    return new Language[] {FirLanguage.INSTANCE};
  }

  @Override
  public boolean acceptElement(@NotNull PsiElement element) {
    return element instanceof FirFunDeclaration || element instanceof FirVersion;
  }

  @Override
  public @NotNull String getElementInfo(@NotNull PsiElement element) {
    if (element instanceof FirFunDeclaration fun) return fun.getHeaderText();
    if (element instanceof FirVersion ver) return ver.getSignatureText();
    return "";
  }
}
