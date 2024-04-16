package org.prlprg.parseprint;

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.io.OutputStream;
import java.io.OutputStreamWriter;
import java.io.StringWriter;
import java.io.Writer;
import java.util.function.Consumer;

/**
 * Adapts a {@link Writer} to preserve indents and dedents.
 *
 * <p>This is the printer analogue of a lexer.
 */
public class PrettyPrintWriter {
  public static final int DEFAULT_INDENT = 2;
  private final Writer output;
  private int indent = 0;

  // region constructors
  /** Use a printer and return the output as a string. */
  public static String use(Consumer<PrettyPrintWriter> useWriter) {
    var writer = new StringWriter();
    var printer = new PrettyPrintWriter(writer);
    useWriter.accept(printer);
    return writer.toString();
  }

  /** Adapt the writer. */
  public PrettyPrintWriter(Writer output) {
    this.output = output;
  }

  /** Create or open a file for printing. */
  public PrettyPrintWriter(File output) throws IOException {
    this.output = new BufferedWriter(new FileWriter(output));
  }

  /** Create a printer which prints to the given stream. */
  public PrettyPrintWriter(OutputStream output) {
    this.output = new BufferedWriter(new OutputStreamWriter(output));
  }

  // endregion constructors

  // region indent
  /**
   * Run the given code, indenting every line printed* by {@link PrettyPrintWriter#DEFAULT_INDENT}
   * spaces (the default).
   *
   * <p>* {@link #write(char, boolean)} and {@link #write(String, boolean)} where {@code keepIndent
   * = false} override this behavior.
   *
   * @see #runIndented(int, Runnable)
   */
  public void runIndented(Runnable code) {
    runIndented(DEFAULT_INDENT, code);
  }

  /**
   * Run the given code, indenting every line printed* by the given number of spaces.
   *
   * <p>* {@link #write(char, boolean)} and {@link #write(String, boolean)} where {@code keepIndent
   * = false} override this behavior.
   */
  public void runIndented(int spaces, Runnable code) {
    var oldIndent = indent;
    indent += spaces;
    code.run();
    indent = oldIndent;
  }

  // endregion

  // region print terminals
  /** Write a character directly, indenting newlines to the current level. */
  public void write(char c) {
    write(c, true);
  }

  /** Write text directly, indenting newlines to the current level. */
  public void write(String text) {
    try {
      output.write(text);
    } catch (IOException e) {
      throw new RuntimeException("failed to write to printer", e);
    }
  }

  /** Write a character directly, possibly not indenting if it's a newline. */
  public void write(char c, boolean keepIndent) {
    try {
      output.write(c);
      if (keepIndent && c == '\n') {
        printIndent();
      }
    } catch (IOException e) {
      throw new RuntimeException("failed to write to printer", e);
    }
  }

  /** Write text directly, possibly not indenting newlines. */
  public void write(String text, boolean keepIndent) {
    try {
      if (keepIndent) {
        var afterPrevNewline = 0;
        while (true) {
          var beforeNextNewline = text.indexOf('\n', afterPrevNewline);
          if (beforeNextNewline == -1) {
            output.write(text, afterPrevNewline, text.length() - afterPrevNewline);
            break;
          }

          output.write(text, afterPrevNewline, beforeNextNewline - afterPrevNewline + 1);
          printIndent();

          afterPrevNewline = beforeNextNewline + 1;
        }
      } else {
        output.write(text);
      }
    } catch (IOException e) {
      throw new RuntimeException("failed to write to printer", e);
    }
  }

  private void printIndent() throws IOException {
    for (int i = 0; i < indent; i++) {
      output.write(' ');
    }
  }
  // endregion
}
