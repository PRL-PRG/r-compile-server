package org.prlprg.fir.intellij;

import com.intellij.lang.Language;

public final class FirLanguage extends Language {
  public static final FirLanguage INSTANCE = new FirLanguage();

  private FirLanguage() {
    super("FIR");
  }
}
