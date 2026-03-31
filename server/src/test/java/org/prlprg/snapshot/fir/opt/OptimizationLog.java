package org.prlprg.snapshot.fir.opt;

import com.github.difflib.DiffUtils;
import com.github.difflib.patch.DeltaType;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Objects;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.observer.Observer;
import org.prlprg.fir.opt.Optimization;
import org.prlprg.util.Files;
import org.prlprg.util.HtmlStringBuilder;

public class OptimizationLog implements AutoCloseable {
  private final Module module;
  private final ArrayList<Diff> diffs = new ArrayList<>();
  private String before = "";

  private final Observer observer =
      new Observer() {
        @Override
        public void before(String func, List<Object> args) {
          if (!func.equals("Optimization#run")) {
            return;
          }

          var _ = (Optimization) args.get(0);
          var module = (Module) args.get(2);

          before = module.toString();
        }

        @Override
        public void after(String func, List<Object> args, @Nullable Object returnValue) {
          if (!func.equals("Optimization#run")) {
            return;
          }

          var opt = (Optimization) args.get(0);
          var module = (Module) args.get(2);
          var changed = (boolean) Objects.requireNonNull(returnValue);

          if (!changed) {
            // Don't record unchanged optimization
            return;
          }

          record(opt, module);
        }
      };

  public OptimizationLog(Module module) {
    this.module = module;
    module.addObserver(observer);
  }

  @Override
  public void close() {
    module.removeObserver(observer);
  }

  private void record(Optimization opt, Module module) {
    var after = module.toString();
    diffs.add(new Diff(opt.name(), before, after));
  }

  public void writeHtml(Path outPath) {
    Files.writeString(outPath, renderHtmlClaude());
  }

  public String renderHtmlClaude() {
    var sb = new HtmlStringBuilder();
    sb.append(
        """
        <!DOCTYPE html>
        <html lang="en">
        <head>
        <meta charset="utf-8">
        <title>Optimization Log</title>
        <style>
          :root {
            --color-canvas-default: #0d1117;
            --color-canvas-subtle: #161b22;
            --color-border-default: #30363d;
            --color-border-muted: #21262d;
            --color-fg-default: #e6edf3;
            --color-fg-muted: #7d8590;
            --color-accent-fg: #58a6ff;
            --color-danger-fg: #f85149;
            --color-success-fg: #3fb950;
            --color-diffblob-addition-bg: rgba(46,160,67,0.15);
            --color-diffblob-addition-line-bg: rgba(46,160,67,0.30);
            --color-diffblob-deletion-bg: rgba(248,81,73,0.15);
            --color-diffblob-deletion-line-bg: rgba(248,81,73,0.30);
            --color-diffblob-hunk-bg: rgba(56,139,253,0.15);
          }
          * { margin: 0; padding: 0; box-sizing: border-box; }
          body {
            font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Noto Sans, Helvetica, Arial, sans-serif;
            background: var(--color-canvas-default);
            color: var(--color-fg-default);
            padding: 24px;
            line-height: 1.5;
          }
          h1 {
            font-size: 24px;
            font-weight: 600;
            margin-bottom: 16px;
            padding-bottom: 8px;
            border-bottom: 1px solid var(--color-border-default);
          }
          .diff-file {
            border: 1px solid var(--color-border-default);
            border-radius: 6px;
            margin-bottom: 16px;
            overflow: hidden;
          }
          .diff-header {
            display: flex;
            align-items: center;
            gap: 8px;
            padding: 8px 16px;
            background: var(--color-canvas-subtle);
            border-bottom: 1px solid var(--color-border-default);
            font-size: 14px;
            font-weight: 600;
            cursor: pointer;
            user-select: none;
          }
          .diff-header:hover { background: var(--color-border-muted); }
          .diff-header .arrow {
            display: inline-block;
            transition: transform 0.15s ease;
            font-size: 12px;
            color: var(--color-fg-muted);
          }
          .diff-file.collapsed .arrow { transform: rotate(-90deg); }
          .diff-file.collapsed .diff-table-wrapper { display: none; }
          .diff-stat {
            margin-left: auto;
            font-weight: 400;
            font-size: 12px;
            color: var(--color-fg-muted);
          }
          .diff-stat .add { color: var(--color-success-fg); font-weight: 600; }
          .diff-stat .del { color: var(--color-danger-fg); font-weight: 600; }
          .diff-table-wrapper { overflow-x: auto; }
          table.diff {
            width: 100%;
            border-collapse: collapse;
            font-family: ui-monospace, SFMono-Regular, 'SF Mono', Menlo, Consolas, 'Liberation Mono', monospace;
            font-size: 12px;
            line-height: 20px;
            tab-size: 4;
          }
          table.diff td {
            padding: 0 10px;
            white-space: pre;
            vertical-align: top;
          }
          table.diff .line-num {
            width: 1%;
            min-width: 50px;
            text-align: right;
            color: var(--color-fg-muted);
            padding: 0 10px;
            user-select: none;
            border-right: 1px solid var(--color-border-muted);
          }
          table.diff .line-marker {
            width: 1%;
            min-width: 20px;
            text-align: center;
            user-select: none;
          }
          tr.hunk-header td {
            background: var(--color-diffblob-hunk-bg);
            color: var(--color-fg-muted);
            font-style: italic;
            padding: 4px 10px;
          }
          tr.diff-add td { background: var(--color-diffblob-addition-bg); }
          tr.diff-add td.line-content { background: var(--color-diffblob-addition-line-bg); }
          tr.diff-add .line-marker { color: var(--color-success-fg); }
          tr.diff-del td { background: var(--color-diffblob-deletion-bg); }
          tr.diff-del td.line-content { background: var(--color-diffblob-deletion-line-bg); }
          tr.diff-del .line-marker { color: var(--color-danger-fg); }
          tr.diff-ctx td { background: var(--color-canvas-default); }
          .empty-state {
            color: var(--color-fg-muted);
            font-style: italic;
            padding: 16px;
            text-align: center;
          }
          .badge {
            display: inline-block;
            padding: 2px 8px;
            border-radius: 12px;
            font-size: 12px;
            font-weight: 600;
          }
          .badge-opt {
            background: rgba(56,139,253,0.2);
            color: var(--color-accent-fg);
          }
          .step-num {
            display: inline-flex;
            align-items: center;
            justify-content: center;
            width: 22px;
            height: 22px;
            border-radius: 50%;
            background: var(--color-border-muted);
            color: var(--color-fg-muted);
            font-size: 11px;
            font-weight: 600;
          }
        </style>
        </head>
        <body>
        <h1>Optimization Log</h1>
        """);

    if (diffs.isEmpty()) {
      sb.append("<div class=\"empty-state\">No optimizations changed the module.</div>\n");
    }

    for (int i = 0; i < diffs.size(); i++) {
      var diff = diffs.get(i);
      var beforeLines = diff.before.split("\n", -1);
      var afterLines = diff.after.split("\n", -1);
      var hunks = computeHunks(beforeLines, afterLines);

      int additions = 0, deletions = 0;
      for (var hunk : hunks) {
        for (var line : hunk.lines) {
          if (line.type == LineType.ADD) additions++;
          else if (line.type == LineType.DEL) deletions++;
        }
      }

      sb.append("<div class=\"diff-file\">\n");
      sb.append(
          "<div class=\"diff-header\" onclick=\"this.parentElement.classList.toggle('collapsed')\">\n");
      sb.append("  <span class=\"arrow\">▼</span>\n");
      sb.append("  <span class=\"step-num\">").append(i + 1).append("</span>\n");
      sb.append("  <span class=\"badge badge-opt\">")
          .append(escapeHtml(diff.optName))
          .append("</span>\n");
      sb.append("  <span class=\"diff-stat\">");
      sb.append("<span class=\"add\">+").append(additions).append("</span> ");
      sb.append("<span class=\"del\">&minus;").append(deletions).append("</span>");
      sb.append("</span>\n");
      sb.append("</div>\n");

      sb.append("<div class=\"diff-table-wrapper\">\n");
      sb.append("<table class=\"diff\">\n");

      for (var hunk : hunks) {
        sb.append("<tr class=\"hunk-header\"><td colspan=\"4\">");
        sb.append("@@ -").append(hunk.oldStart + 1).append(",").append(hunk.oldCount);
        sb.append(" +").append(hunk.newStart + 1).append(",").append(hunk.newCount);
        sb.append(" @@</td></tr>\n");

        for (var line : hunk.lines) {
          switch (line.type) {
            case CTX -> {
              sb.append("<tr class=\"diff-ctx\">");
              sb.append("<td class=\"line-num\">").append(line.oldNum).append("</td>");
              sb.append("<td class=\"line-num\">").append(line.newNum).append("</td>");
              sb.append("<td class=\"line-marker\">&nbsp;</td>");
              sb.append("<td class=\"line-content\">")
                  .append(escapeHtml(line.text))
                  .append("</td>");
              sb.append("</tr>\n");
            }
            case DEL -> {
              sb.append("<tr class=\"diff-del\">");
              sb.append("<td class=\"line-num\">").append(line.oldNum).append("</td>");
              sb.append("<td class=\"line-num\"></td>");
              sb.append("<td class=\"line-marker\">&minus;</td>");
              sb.append("<td class=\"line-content\">")
                  .append(escapeHtml(line.text))
                  .append("</td>");
              sb.append("</tr>\n");
            }
            case ADD -> {
              sb.append("<tr class=\"diff-add\">");
              sb.append("<td class=\"line-num\"></td>");
              sb.append("<td class=\"line-num\">").append(line.newNum).append("</td>");
              sb.append("<td class=\"line-marker\">+</td>");
              sb.append("<td class=\"line-content\">")
                  .append(escapeHtml(line.text))
                  .append("</td>");
              sb.append("</tr>\n");
            }
          }
        }
      }

      sb.append("</table>\n</div>\n</div>\n");
    }

    sb.append(
        """
        <script>
        // Collapse all by default, expand on click (handled via onclick in header)
        </script>
        </body>
        </html>
        """);

    return sb.toString();
  }

  // region diff algorithm

  private static String escapeHtml(String s) {
    return s.replace("&", "&amp;").replace("<", "&lt;").replace(">", "&gt;");
  }

  private enum LineType {
    CTX,
    ADD,
    DEL
  }

  private record DiffLine(LineType type, int oldNum, int newNum, String text) {}

  private record ClaudeHunk(
      int oldStart, int oldCount, int newStart, int newCount, List<DiffLine> lines) {}

  /** Compute unified-diff hunks with the given number of context lines. Uses LCS via DP. */
  private static List<ClaudeHunk> computeHunks(String[] oldLines, String[] newLines) {
    // Compute LCS edit script
    var edits = computeEditScript(oldLines, newLines);

    // Group edits into hunks with context
    var hunks = new ArrayList<ClaudeHunk>();
    int i = 0;
    while (i < edits.size()) {
      // Skip context lines until we find a change
      while (i < edits.size() && edits.get(i).type == LineType.CTX) i++;
      if (i >= edits.size()) break;

      // Start of hunk: include preceding context
      int hunkStart = Math.max(0, i - CONTEXT_LINES);
      // Find end of hunk: include all changes and bridge gaps smaller than 2*CONTEXT_LINES
      int hunkEnd = getHunkEnd(i, edits);

      // Build hunk
      var lines = new ArrayList<DiffLine>();
      int oldNum = 0, newNum = 0;
      // Count up to hunkStart to get starting line numbers
      for (int j = 0; j < hunkStart; j++) {
        if (edits.get(j).type != LineType.ADD) oldNum++;
        if (edits.get(j).type != LineType.DEL) newNum++;
      }
      int oldStart = oldNum, newStart = newNum;
      int oldCount = 0, newCount = 0;
      for (int j = hunkStart; j < hunkEnd; j++) {
        var edit = edits.get(j);
        switch (edit.type) {
          case CTX -> {
            oldNum++;
            newNum++;
            oldCount++;
            newCount++;
            lines.add(new DiffLine(LineType.CTX, oldNum, newNum, edit.text));
          }
          case DEL -> {
            oldNum++;
            oldCount++;
            lines.add(new DiffLine(LineType.DEL, oldNum, 0, edit.text));
          }
          case ADD -> {
            newNum++;
            newCount++;
            lines.add(new DiffLine(LineType.ADD, 0, newNum, edit.text));
          }
        }
      }
      hunks.add(new ClaudeHunk(oldStart, oldCount, newStart, newCount, lines));
      i = hunkEnd;
    }

    return hunks;
  }

  private static int getHunkEnd(int i, List<DiffLine> edits) {
    int hunkEnd = i;
    while (true) {
      // Find end of current change block
      while (hunkEnd < edits.size() && edits.get(hunkEnd).type != LineType.CTX) hunkEnd++;
      // Look ahead: if the next change is within CONTEXT_LINES*2 lines, merge
      int nextChange = hunkEnd;
      while (nextChange < edits.size() && edits.get(nextChange).type == LineType.CTX) nextChange++;
      if (nextChange < edits.size() && nextChange - hunkEnd <= CONTEXT_LINES * 2) {
        hunkEnd = nextChange;
      } else {
        break;
      }
    }
    // Include trailing context
    hunkEnd = Math.min(edits.size(), hunkEnd + CONTEXT_LINES);
    return hunkEnd;
  }

  /** Compute a flat edit script (list of CTX/ADD/DEL entries) via LCS DP. */
  private static List<DiffLine> computeEditScript(String[] oldLines, String[] newLines) {
    int m = oldLines.length, n = newLines.length;

    // For large inputs, use a hash-based optimization: only DP over distinct line hashes
    // This keeps memory bounded for typical module diffs
    int[][] dp = new int[m + 1][n + 1];
    for (int i = m - 1; i >= 0; i--) {
      for (int j = n - 1; j >= 0; j--) {
        if (oldLines[i].equals(newLines[j])) {
          dp[i][j] = dp[i + 1][j + 1] + 1;
        } else {
          dp[i][j] = Math.max(dp[i + 1][j], dp[i][j + 1]);
        }
      }
    }

    // Trace back to build edit script
    var edits = new ArrayList<DiffLine>();
    int i = 0, j = 0;
    while (i < m || j < n) {
      if (i < m && j < n && oldLines[i].equals(newLines[j])) {
        edits.add(new DiffLine(LineType.CTX, 0, 0, oldLines[i]));
        i++;
        j++;
      } else if (i < m && (j >= n || dp[i + 1][j] >= dp[i][j + 1])) {
        edits.add(new DiffLine(LineType.DEL, 0, 0, oldLines[i]));
        i++;
      } else {
        edits.add(new DiffLine(LineType.ADD, 0, 0, newLines[j]));
        j++;
      }
    }
    return edits;
  }

  // endregion

  private String renderHtmlCodex() {
    var stats = summarizeDiffs(diffs);
    var html =
        new HtmlStringBuilder()
            .append(
                """
            <!DOCTYPE html>
            <html lang="en">
            <head>
              <meta charset="utf-8">
              <meta name="viewport" content="width=device-width, initial-scale=1">
              <title>Optimization Log</title>
              <style>
                :root {
                  color-scheme: light;
                  --page-bg: #f6f8fa;
                  --page-glow: rgba(9, 105, 218, 0.08);
                  --panel-bg: #ffffff;
                  --panel-alt: #f6f8fa;
                  --border: #d0d7de;
                  --border-strong: #afb8c1;
                  --text: #1f2328;
                  --muted: #57606a;
                  --added-bg: #dafbe1;
                  --added-bg-strong: #aceebb;
                  --added-fg: #116329;
                  --deleted-bg: #ffebe9;
                  --deleted-bg-strong: #ffcecb;
                  --deleted-fg: #cf222e;
                  --hunk-bg: #ddf4ff;
                  --hunk-fg: #0969da;
                  --shadow: 0 1px 0 rgba(27, 31, 36, 0.04), 0 10px 30px rgba(140, 149, 159, 0.14);
                }

                * {
                  box-sizing: border-box;
                }

                body {
                  margin: 0;
                  color: var(--text);
                  background:
                      radial-gradient(circle at top, var(--page-glow), transparent 32%),
                      linear-gradient(180deg, var(--page-bg) 0%, #eef2f6 100%);
                  font-family:
                      ui-sans-serif,
                      -apple-system,
                      BlinkMacSystemFont,
                      "Segoe UI",
                      sans-serif;
                }

                main {
                  max-width: 1280px;
                  margin: 0 auto;
                  padding: 32px 20px 72px;
                }

                .hero {
                  padding: 28px;
                  border: 1px solid rgba(208, 215, 222, 0.75);
                  border-radius: 20px;
                  background:
                      linear-gradient(135deg, rgba(9, 105, 218, 0.09), rgba(255, 255, 255, 0)),
                      var(--panel-bg);
                  box-shadow: var(--shadow);
                }

                .hero h1 {
                  margin: 0;
                  font-size: clamp(2rem, 5vw, 3rem);
                  line-height: 1.05;
                  letter-spacing: -0.03em;
                }

                .hero p {
                  margin: 10px 0 0;
                  max-width: 60rem;
                  color: var(--muted);
                  font-size: 1.02rem;
                }

                .summary {
                  display: flex;
                  flex-wrap: wrap;
                  gap: 12px;
                  margin: 18px 0 0;
                  padding: 0;
                  list-style: none;
                }

                .summary li {
                  padding: 8px 12px;
                  border: 1px solid var(--border);
                  border-radius: 999px;
                  background: rgba(255, 255, 255, 0.72);
                  font-size: 0.92rem;
                  font-weight: 600;
                }

                .summary .add {
                  color: var(--added-fg);
                }

                .summary .del {
                  color: var(--deleted-fg);
                }

                .optimizations {
                  margin: 24px 0 0;
                  padding: 0;
                  list-style: none;
                  display: grid;
                  gap: 24px;
                }

                .optimization {
                  overflow: hidden;
                  border: 1px solid var(--border);
                  border-radius: 20px;
                  background: var(--panel-bg);
                  box-shadow: var(--shadow);
                }

                .optimization-header {
                  display: flex;
                  justify-content: space-between;
                  align-items: start;
                  gap: 16px;
                  padding: 18px 20px;
                  border-bottom: 1px solid var(--border);
                  background: linear-gradient(180deg, #fff, var(--panel-alt));
                }

                .optimization-header h2 {
                  margin: 0;
                  font-size: 1.15rem;
                  line-height: 1.25;
                }

                .optimization-header p {
                  margin: 6px 0 0;
                  color: var(--muted);
                  font-size: 0.94rem;
                }

                .badges {
                  display: flex;
                  flex-wrap: wrap;
                  gap: 8px;
                  justify-content: end;
                }

                .badge {
                  padding: 4px 10px;
                  border-radius: 999px;
                  border: 1px solid transparent;
                  font-size: 0.84rem;
                  font-weight: 700;
                  white-space: nowrap;
                }

                .badge.add {
                  background: rgba(46, 160, 67, 0.11);
                  border-color: rgba(46, 160, 67, 0.18);
                  color: var(--added-fg);
                }

                .badge.del {
                  background: rgba(207, 34, 46, 0.1);
                  border-color: rgba(207, 34, 46, 0.18);
                  color: var(--deleted-fg);
                }

                .diffs {
                  display: grid;
                  gap: 16px;
                  padding: 16px;
                  background: linear-gradient(180deg, rgba(246, 248, 250, 0.55), rgba(246, 248, 250, 0));
                }

                .file-diff {
                  overflow: hidden;
                  border: 1px solid var(--border);
                  border-radius: 14px;
                  background: var(--panel-bg);
                }

                .file-diff-header {
                  padding: 10px 14px;
                  border-bottom: 1px solid var(--border);
                  background: var(--panel-alt);
                  color: var(--muted);
                  font-size: 0.9rem;
                  font-weight: 600;
                }

                table {
                  width: 100%;
                  border-collapse: collapse;
                  font-family:
                      ui-monospace,
                      "SFMono-Regular",
                      "SF Mono",
                      Menlo,
                      Consolas,
                      "Liberation Mono",
                      monospace;
                  font-size: 0.9rem;
                }

                td {
                  padding: 0;
                  vertical-align: top;
                }

                .line-no {
                  width: 56px;
                  padding: 0 10px;
                  text-align: right;
                  color: var(--muted);
                  background: var(--panel-alt);
                  border-right: 1px solid var(--border);
                  user-select: none;
                }

                .marker {
                  width: 28px;
                  padding: 0 6px;
                  text-align: center;
                  border-right: 1px solid var(--border);
                  user-select: none;
                  font-weight: 700;
                }

                .code {
                  padding: 0 14px;
                  white-space: pre-wrap;
                  word-break: break-word;
                }

                tr.context {
                  background: var(--panel-bg);
                }

                tr.insert {
                  background: var(--added-bg);
                }

                tr.insert .marker {
                  background: rgba(46, 160, 67, 0.08);
                  color: var(--added-fg);
                }

                tr.delete {
                  background: var(--deleted-bg);
                }

                tr.delete .marker {
                  background: rgba(207, 34, 46, 0.08);
                  color: var(--deleted-fg);
                }

                tr.hunk td {
                  padding: 8px 14px;
                  background: var(--hunk-bg);
                  color: var(--hunk-fg);
                  border-top: 1px solid rgba(9, 105, 218, 0.12);
                  border-bottom: 1px solid rgba(9, 105, 218, 0.12);
                  font-size: 0.83rem;
                  font-weight: 700;
                }

                tr.skip td {
                  padding: 10px 14px;
                  text-align: center;
                  color: var(--muted);
                  background: linear-gradient(180deg, rgba(246, 248, 250, 0.95), rgba(246, 248, 250, 0.72));
                  border-top: 1px solid var(--border);
                  border-bottom: 1px solid var(--border);
                  font-style: italic;
                }

                .intra {
                  padding: 0 0.08em;
                  border-radius: 0.25em;
                }

                tr.insert .intra {
                  background: var(--added-bg-strong);
                }

                tr.delete .intra {
                  background: var(--deleted-bg-strong);
                }

                .empty {
                  margin-top: 24px;
                  padding: 40px 24px;
                  border: 1px dashed var(--border-strong);
                  border-radius: 20px;
                  background: rgba(255, 255, 255, 0.8);
                  text-align: center;
                  color: var(--muted);
                }

                @media (max-width: 760px) {
                  main {
                    padding-inline: 12px;
                  }

                  .optimization-header {
                    flex-direction: column;
                  }

                  .badges {
                    justify-content: start;
                  }

                  .line-no {
                    width: 44px;
                    padding-inline: 6px;
                  }

                  .marker {
                    width: 22px;
                    padding-inline: 4px;
                  }

                  .code {
                    padding-inline: 10px;
                  }
                }
              </style>
            </head>
            <body>
              <main>
                <section class="hero">
                  <h1>Optimization log</h1>
                  <p>GitHub-style line diffs for every optimization that actually changed the module.</p>
                  <ul class="summary">
            """);
    appendSummaryBadge(html, diffs.size() + " changed optimizations", "");
    appendSummaryBadge(html, "+" + stats.additions() + " added lines", "add");
    appendSummaryBadge(html, "-" + stats.deletions() + " removed lines", "del");
    html.append(
        """
                  </ul>
                </section>
            """);

    if (diffs.isEmpty()) {
      html.append(
          """
                <section class="empty">No optimization changed the module.</section>
              </main>
            </body>
            </html>
            """);
      return html.toString();
    }

    html.append("<ol class=\"optimizations\">");
    for (var i = 0; i < diffs.size(); i++) {
      var diff = diffs.get(i);
      var lines = renderLines(diff);
      var hunks = hunks(lines);
      var diffStats = summarizeRenderedLines(lines);
      html.append(
          """
              <li class="optimization">
                <article>
                  <header class="optimization-header">
                    <div>
                      <h2>""");
      html.append(escape(diff.optName()));
      html.append(
          """
                      </h2>
                      <p>Optimization""");
      html.append(" ").append(i + 1).append(" of ").append(diffs.size());
      html.append(
          """
                      </p>
                    </div>
                    <div class="badges">
          """);
      appendBadge(html, "+" + diffStats.additions(), "add");
      appendBadge(html, "-" + diffStats.deletions(), "del");
      html.append(
          """
                    </div>
                  </header>
                  <section class="diffs">
                    <div class="file-diff">
                      <div class="file-diff-header">module.fir</div>
                      <table>
                        <tbody>
          """);

      var previousHunkEnd = 0;
      for (var hunk : hunks) {
        if (hunk.start() > previousHunkEnd) {
          appendSkipRow(html, hunk.start() - previousHunkEnd);
        }

        appendHunkHeader(html, hunkStats(lines, hunk));
        for (var line : lines.subList(hunk.start(), hunk.end())) {
          appendRenderedLine(html, line);
        }

        previousHunkEnd = hunk.end();
      }

      if (previousHunkEnd < lines.size()) {
        appendSkipRow(html, lines.size() - previousHunkEnd);
      }

      html.append(
          """
                        </tbody>
                      </table>
                    </div>
                  </section>
                </article>
              </li>
          """);
    }

    html.append(
        """
            </ol>
          </main>
        </body>
        </html>
        """);
    return html.toString();
  }

  private static void appendSummaryBadge(HtmlStringBuilder html, String text, String cssClass) {
    html.append("<li");
    if (!cssClass.isEmpty()) {
      //noinspection LanguageMismatch
      html.append(" class=\"").append(cssClass).append("\"");
    }
    html.append(">").append(escape(text)).append("</li>");
  }

  private static void appendBadge(HtmlStringBuilder html, String text, String cssClass) {
    //noinspection LanguageMismatch
    html.append("<span class=\"badge ").append(cssClass).append("\">");
    html.append(escape(text));
    html.append("</span>");
  }

  private static void appendSkipRow(HtmlStringBuilder html, int hiddenLines) {
    html.append(
        """
            <tr class="skip"><td colspan="4">
        """);
    html.append(hiddenLines)
        .append(hiddenLines == 1 ? " unchanged line hidden" : " unchanged lines hidden");
    html.append(
        """
            </td></tr>
        """);
  }

  private static void appendHunkHeader(HtmlStringBuilder html, HunkStats stats) {
    html.append(
        """
            <tr class="hunk"><td colspan="4">@@ -
        """);
    html.append(formatRange(stats.beforeStart(), stats.beforeCount()));
    html.append(" +").append(formatRange(stats.afterStart(), stats.afterCount())).append(" @@");
    html.append(
        """
            </td></tr>
        """);
  }

  private static String formatRange(int start, int count) {
    return start + "," + count;
  }

  private static void appendRenderedLine(HtmlStringBuilder html, RenderedLine line) {
    html.append("<tr class=\"").append(line.kind().cssClass()).append("\">");
    appendLineNumber(html, line.beforeLineNo());
    appendLineNumber(html, line.afterLineNo());
    html.append("<td class=\"marker\">").append(line.kind().marker()).append("</td>");
    html.append("<td class=\"code\">").append(line.html()).append("</td>");
    html.append("</tr>");
  }

  private static void appendLineNumber(HtmlStringBuilder html, int lineNo) {
    html.append("<td class=\"line-no\">");
    if (lineNo != 0) {
      html.append(lineNo);
    }
    html.append("</td>");
  }

  private static List<RenderedLine> renderLines(Diff diff) {
    var beforeLines = splitLines(diff.before());
    var afterLines = splitLines(diff.after());
    var patch = DiffUtils.diff(beforeLines, afterLines);
    var lines = new ArrayList<RenderedLine>();
    var beforeIndex = 0;
    var afterIndex = 0;

    for (var delta : patch.getDeltas()) {
      var sourcePosition = delta.getSource().getPosition();
      var targetPosition = delta.getTarget().getPosition();
      while (beforeIndex < sourcePosition && afterIndex < targetPosition) {
        lines.add(
            new RenderedLine(
                LineKind.CONTEXT,
                beforeIndex + 1,
                afterIndex + 1,
                escape(beforeLines.get(beforeIndex))));
        beforeIndex++;
        afterIndex++;
      }

      var deleted = delta.getSource().getLines();
      var inserted = delta.getTarget().getLines();
      if (delta.getType() == DeltaType.CHANGE) {
        var pairedLines = Math.min(deleted.size(), inserted.size());
        for (var i = 0; i < pairedLines; i++) {
          var inlineDiff = inlineDiff(deleted.get(i), inserted.get(i));
          lines.add(new RenderedLine(LineKind.DELETE, beforeIndex + 1, 0, inlineDiff.beforeHtml()));
          lines.add(new RenderedLine(LineKind.INSERT, 0, afterIndex + 1, inlineDiff.afterHtml()));
          beforeIndex++;
          afterIndex++;
        }
        for (var i = pairedLines; i < deleted.size(); i++) {
          lines.add(new RenderedLine(LineKind.DELETE, beforeIndex + 1, 0, escape(deleted.get(i))));
          beforeIndex++;
        }
        for (var i = pairedLines; i < inserted.size(); i++) {
          lines.add(new RenderedLine(LineKind.INSERT, 0, afterIndex + 1, escape(inserted.get(i))));
          afterIndex++;
        }
      } else {
        for (var line : deleted) {
          lines.add(new RenderedLine(LineKind.DELETE, beforeIndex + 1, 0, escape(line)));
          beforeIndex++;
        }
        for (var line : inserted) {
          lines.add(new RenderedLine(LineKind.INSERT, 0, afterIndex + 1, escape(line)));
          afterIndex++;
        }
      }
    }

    while (beforeIndex < beforeLines.size() && afterIndex < afterLines.size()) {
      lines.add(
          new RenderedLine(
              LineKind.CONTEXT,
              beforeIndex + 1,
              afterIndex + 1,
              escape(beforeLines.get(beforeIndex))));
      beforeIndex++;
      afterIndex++;
    }

    return lines;
  }

  private static List<String> splitLines(String text) {
    if (text.isEmpty()) {
      return List.of();
    }
    var parts = text.split("\\R", -1);
    if (endsWithLineBreak(text)) {
      parts = Arrays.copyOf(parts, parts.length - 1);
    }
    return List.of(parts);
  }

  private static boolean endsWithLineBreak(String text) {
    var lastChar = text.charAt(text.length() - 1);
    return lastChar == '\n' || lastChar == '\r';
  }

  private static InlineDiff inlineDiff(String before, String after) {
    var prefix = 0;
    var prefixLimit = Math.min(before.length(), after.length());
    while (prefix < prefixLimit && before.charAt(prefix) == after.charAt(prefix)) {
      prefix++;
    }

    var suffix = 0;
    var suffixLimit = prefixLimit - prefix;
    while (suffix < suffixLimit
        && before.charAt(before.length() - 1 - suffix)
            == after.charAt(after.length() - 1 - suffix)) {
      suffix++;
    }

    return new InlineDiff(
        highlightChangedSegment(before, prefix, before.length() - suffix),
        highlightChangedSegment(after, prefix, after.length() - suffix));
  }

  private static String highlightChangedSegment(String text, int changedStart, int changedEnd) {
    if (changedStart >= changedEnd) {
      return escape(text);
    }

    return escape(text.substring(0, changedStart))
        + "<span class=\"intra\">"
        + escape(text.substring(changedStart, changedEnd))
        + "</span>"
        + escape(text.substring(changedEnd));
  }

  private static final int CONTEXT_LINES = 3;

  private static List<Hunk> hunks(List<RenderedLine> lines) {
    var hunks = new ArrayList<Hunk>();
    var change = 0;

    while (change < lines.size()) {
      while (change < lines.size() && lines.get(change).kind() == LineKind.CONTEXT) {
        change++;
      }
      if (change == lines.size()) {
        break;
      }

      var start = Math.max(change - CONTEXT_LINES, 0);
      var end = Math.min(change + CONTEXT_LINES + 1, lines.size());
      var i = change + 1;
      while (i < lines.size()) {
        if (lines.get(i).kind() != LineKind.CONTEXT) {
          end = Math.min(i + CONTEXT_LINES + 1, lines.size());
        }
        if (i >= end) {
          break;
        }
        i++;
      }

      hunks.add(new Hunk(start, end));
      change = end;
    }

    return hunks;
  }

  private static HunkStats hunkStats(List<RenderedLine> lines, Hunk hunk) {
    var beforeStart = 0;
    var beforeCount = 0;
    var afterStart = 0;
    var afterCount = 0;

    for (var line : lines.subList(hunk.start(), hunk.end())) {
      if (line.beforeLineNo() != 0) {
        if (beforeStart == 0) {
          beforeStart = line.beforeLineNo();
        }
        beforeCount++;
      }
      if (line.afterLineNo() != 0) {
        if (afterStart == 0) {
          afterStart = line.afterLineNo();
        }
        afterCount++;
      }
    }

    return new HunkStats(beforeStart, beforeCount, afterStart, afterCount);
  }

  private static DiffStats summarizeRenderedLines(List<RenderedLine> lines) {
    var additions = 0;
    var deletions = 0;
    for (var line : lines) {
      switch (line.kind()) {
        case INSERT -> additions++;
        case DELETE -> deletions++;
        case CONTEXT -> {}
      }
    }
    return new DiffStats(additions, deletions);
  }

  private static DiffStats summarizeDiffs(List<Diff> diffs) {
    var additions = 0;
    var deletions = 0;
    for (var diff : diffs) {
      var diffStats = summarizeRenderedLines(renderLines(diff));
      additions += diffStats.additions();
      deletions += diffStats.deletions();
    }
    return new DiffStats(additions, deletions);
  }

  private static String escape(String text) {
    var escaped = new StringBuilder(text.length());
    for (var i = 0; i < text.length(); i++) {
      switch (text.charAt(i)) {
        case '&' -> escaped.append("&amp;");
        case '<' -> escaped.append("&lt;");
        case '>' -> escaped.append("&gt;");
        case '"' -> escaped.append("&quot;");
        case '\'' -> escaped.append("&#39;");
        default -> escaped.append(text.charAt(i));
      }
    }
    return escaped.toString();
  }

  private record Diff(String optName, String before, String after) {}

  private record DiffStats(int additions, int deletions) {}

  private record InlineDiff(String beforeHtml, String afterHtml) {}

  private record Hunk(int start, int end) {}

  private record HunkStats(int beforeStart, int beforeCount, int afterStart, int afterCount) {}

  private record RenderedLine(LineKind kind, int beforeLineNo, int afterLineNo, String html) {}

  private enum LineKind {
    CONTEXT("context", " "),
    DELETE("delete", "-"),
    INSERT("insert", "+");

    private final String cssClass;
    private final String marker;

    LineKind(String cssClass, String marker) {
      this.cssClass = cssClass;
      this.marker = marker;
    }

    private String cssClass() {
      return cssClass;
    }

    private String marker() {
      return marker;
    }
  }
}
