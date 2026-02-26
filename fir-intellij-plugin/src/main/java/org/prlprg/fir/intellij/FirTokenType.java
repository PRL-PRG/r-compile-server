package org.prlprg.fir.intellij;

import com.intellij.psi.tree.IElementType;
import org.jetbrains.annotations.NonNls;
import org.jetbrains.annotations.NotNull;

public final class FirTokenType extends IElementType {
  public FirTokenType(@NotNull @NonNls String debugName) {
    super(debugName, FirLanguage.INSTANCE);
  }

  @Override
  public @NotNull String toString() {
    return "FIR_" + super.toString();
  }
}
