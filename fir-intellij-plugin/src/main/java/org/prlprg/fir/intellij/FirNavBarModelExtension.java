package org.prlprg.fir.intellij;

import com.intellij.ide.navigationToolbar.StructureAwareNavBarModelExtension;
import com.intellij.lang.Language;
import javax.swing.Icon;
import org.jetbrains.annotations.NotNull;
import org.jetbrains.annotations.Nullable;

/** Adds FIR function declarations and versions to the navigation bar. */
public final class FirNavBarModelExtension extends StructureAwareNavBarModelExtension {
  @Override
  protected @NotNull Language getLanguage() {
    return FirLanguage.INSTANCE;
  }

  @Override
  public @Nullable String getPresentableText(Object object) {
    if (object instanceof FirFunDeclaration fun) return fun.getHeaderText();
    if (object instanceof FirVersion ver) return ver.getSignatureText();
    return null;
  }

  @Override
  public @Nullable Icon getIcon(Object object) {
    if (object instanceof FirFunDeclaration fun) {
      var pres = fun.getPresentation();
      if (pres != null) return pres.getIcon(false);
    }
    if (object instanceof FirVersion ver) {
      var pres = ver.getPresentation();
      if (pres != null) return pres.getIcon(false);
    }
    return null;
  }
}
