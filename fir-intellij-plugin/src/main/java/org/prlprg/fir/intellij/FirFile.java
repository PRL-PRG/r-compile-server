package org.prlprg.fir.intellij;

import com.intellij.extapi.psi.PsiFileBase;
import com.intellij.openapi.fileTypes.FileType;
import com.intellij.psi.FileViewProvider;
import org.jetbrains.annotations.NotNull;

public final class FirFile extends PsiFileBase {
  public FirFile(@NotNull FileViewProvider viewProvider) {
    super(viewProvider, FirLanguage.INSTANCE);
  }

  @Override
  public @NotNull FileType getFileType() {
    return FirFileType.INSTANCE;
  }

  @Override
  public @NotNull String toString() {
    return "FIR file";
  }
}
