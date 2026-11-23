package org.prlprg.fir.intellij;

import static org.prlprg.fir.intellij.FirSyntaxHighlighter.*;

import com.intellij.openapi.editor.colors.TextAttributesKey;
import com.intellij.openapi.fileTypes.SyntaxHighlighter;
import com.intellij.openapi.options.colors.AttributesDescriptor;
import com.intellij.openapi.options.colors.ColorDescriptor;
import com.intellij.openapi.options.colors.ColorSettingsPage;
import java.util.Map;
import javax.swing.Icon;
import org.jetbrains.annotations.NotNull;
import org.jetbrains.annotations.Nullable;

public final class FirColorSettingsPage implements ColorSettingsPage {
  private static final AttributesDescriptor[] DESCRIPTORS = {
    new AttributesDescriptor("Keyword", KEYWORD),
    new AttributesDescriptor("Property", PROPERTY),
    new AttributesDescriptor("Type", TYPE),
    new AttributesDescriptor("Register", REGISTER),
    new AttributesDescriptor("R variable", VARIABLE),
    new AttributesDescriptor("Function declaration", FUNCTION_DECLARATION),
    new AttributesDescriptor("Function reference", FUNCTION_CALL),
    new AttributesDescriptor("Block label", LABEL),
    new AttributesDescriptor("Number", NUMBER),
    new AttributesDescriptor("Constant", CONSTANT),
    new AttributesDescriptor("String", STRING),
    new AttributesDescriptor("S-expression//Background", SEXP),
    new AttributesDescriptor("S-expression//Delimiter", SEXP_DELIMITER),
    new AttributesDescriptor("Comment", COMMENT),
    new AttributesDescriptor("Operator", OPERATOR),
    new AttributesDescriptor("Braces and operators//Brackets", BRACKETS),
    new AttributesDescriptor("Braces and operators//Parentheses", PARENTHESES),
    new AttributesDescriptor("Braces and operators//Braces", BRACES),
    new AttributesDescriptor("Braces and operators//Punctuation", PUNCTUATION),
    new AttributesDescriptor("Bad character", BAD_CHAR),
  };

  @Override
  public @Nullable Icon getIcon() {
    return FirIcons.FILE;
  }

  @Override
  public @NotNull SyntaxHighlighter getHighlighter() {
    return new FirSyntaxHighlighter();
  }

  @Override
  public @NotNull String getDemoText() {
    return """
        # Adds n to x.
        @strict
        fun add(x, n = <int 1>) {
          (x:*@!, n:*) -+> V {
            mkenv;
            st x = x;
            v: V = ld x;
            p: cls = ldf print;
            d: dots = dots[v, <str "a">, 1.5];
            r: V = `+`%< dots --> V >(d) in <lang local({
                `+`(x, n)
              })>;
            if TRUE then L1(r) else L2();
          L1(y: V):
            return y;
          L2():
            raise "error";
          }
        }
        """;
  }

  @Override
  public @Nullable Map<String, TextAttributesKey> getAdditionalHighlightingTagToDescriptorMap() {
    return null;
  }

  @Override
  public AttributesDescriptor @NotNull [] getAttributeDescriptors() {
    return DESCRIPTORS;
  }

  @Override
  public ColorDescriptor @NotNull [] getColorDescriptors() {
    return ColorDescriptor.EMPTY_ARRAY;
  }

  @Override
  public @NotNull String getDisplayName() {
    return "FIŘ";
  }
}
