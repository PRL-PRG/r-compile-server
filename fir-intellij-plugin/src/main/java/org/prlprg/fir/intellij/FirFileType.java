package org.prlprg.fir.intellij;

import com.intellij.openapi.fileTypes.LanguageFileType;
import javax.swing.Icon;
import org.jetbrains.annotations.NotNull;
import org.jetbrains.annotations.Nullable;

public final class FirFileType extends LanguageFileType {
  public static final FirFileType INSTANCE = new FirFileType();

  private FirFileType() {
    super(FirLanguage.INSTANCE);
  }

  @Override
  public @NotNull String getName() {
    return "FIR";
  }

  @Override
  public @NotNull String getDescription() {
    return "Functional IR";
  }

  @Override
  public @NotNull String getDefaultExtension() {
    return "fir";
  }

  @Override
  public @Nullable Icon getIcon() {
    return FirIcons.FILE;
  }
}
