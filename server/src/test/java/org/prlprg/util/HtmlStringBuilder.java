package org.prlprg.util;

import org.intellij.lang.annotations.Language;

/// [StringBuilder] but input has [org.intellij.lang.annotations.Language] for syntax highlighting
public class HtmlStringBuilder {
  private final StringBuilder sb = new StringBuilder();

  public HtmlStringBuilder append(@Language("html") String str) {
    sb.append(str);
    return this;
  }

  public HtmlStringBuilder append(int i) {
    sb.append(i);
    return this;
  }

  @Override
  public String toString() {
    return sb.toString();
  }
}
