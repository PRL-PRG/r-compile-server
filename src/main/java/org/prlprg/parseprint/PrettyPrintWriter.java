package org.prlprg.parseprint;

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.io.OutputStream;
import java.io.OutputStreamWriter;
import java.io.StringWriter;
import java.io.Writer;
import java.util.Formatter;
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
  private long offset = 0;
  private long line = 1;
  private long column = 1;

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

  // region getters and setters
  /** The current offset, line, and column in the output. */
  public Position position() {
    return new Position(offset, line, column);
  }

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

  // endregion getters and setters

  // region print terminals
  /**
   * Write the given character until the given column is reached.
   *
   * <p>This is useful e.g. to pad with spaces. To left-pad, write until the intended column minus
   * the size of whatever you intend to print next.
   *
   * @throws IllegalArgumentException if {@code c} is a newline.
   * @throws IllegalArgumentException if the column is already passed.
   */
  public void writeUntilColumn(char c, int col) {
    writeUntilColumn(c, col, false);
  }

  /**
   * Write the given character until the given column is reached.
   *
   * <p>This is useful e.g. to pad with spaces. To left-pad, write until the intended column minus
   * the size of whatever you intend to print next.
   *
   * @throws IllegalArgumentException if {@code c} is a newline.
   * @throws IllegalArgumentException if the column is already passed and {@code okToBeAfter} is
   *     false.
   */
  public void writeUntilColumn(char c, int col, boolean okToBeAfter) {
    if (c == '\n') {
      throw new IllegalArgumentException("cannot write newline until column");
    }
    if (column > col) {
      if (okToBeAfter) {
        return;
      } else {
        throw new IllegalArgumentException("column already passed");
      }
    }

    try {
      while (column < col) {
        output.write(c);
        offset++;
        column++;
      }
    } catch (IOException e) {
      throw new RuntimeException("failed to write to printer", e);
    }
  }

  /** Write a character directly, indenting newlines to the current level. */
  public void write(char c) {
    write(c, true);
  }

  /** Write text directly, indenting newlines to the current level. */
  public void write(String text) {
    write(text, true);
  }

  /** Write a character directly, possibly not indenting if it's a newline. */
  public void write(char c, boolean keepIndent) {
    try {
      output.write(c);
      advancePosition(c);
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
            // Write remaining text (no newline; will write all text if it doesn't contain a
            // newline).
            var len = text.length() - afterPrevNewline;
            output.write(text, afterPrevNewline, len);
            offset += len;
            column += len;
            break;
          }

          // Write text until newline...
          var len = beforeNextNewline - afterPrevNewline + 1;
          output.write(text, afterPrevNewline, len);
          offset += len;
          line++;
          column = 1;
          // ...then print indent.
          printIndent();

          afterPrevNewline = beforeNextNewline + 1;
        }
      } else {
        output.write(text);
        advancePosition(text);
      }
    } catch (IOException e) {
      throw new RuntimeException("failed to write to printer", e);
    }
  }

  private void printIndent() throws IOException {
    for (int i = 0; i < indent; i++) {
      output.write(' ');
      column++;
    }
  }

  /** Move {@link #position()} after the given characters. */
  private void advancePosition(String s) {
    setPosition(position().advanced(s));
  }

  /** Move {@link #position()} after the given character. */
  private void advancePosition(int c) {
    setPosition(position().advanced(c));
  }

  private void setPosition(Position p) {
    offset = p.offset();
    line = p.line();
    column = p.column();
  }

  // endregion

  /** Gets a formatter that writes to this {@code printf}-style, respecting indents. */
  public Formatter formatter() {
    return new Formatter(
        new Appendable() {
          @Override
          public Appendable append(CharSequence csq) {
            write(csq.toString());
            return this;
          }

          @Override
          public Appendable append(CharSequence csq, int start, int end) {
            write(csq.subSequence(start, end).toString());
            return this;
          }

          @Override
          public Appendable append(char c) {
            write(c);
            return this;
          }
        });
  }
}
