package org.prlprg.snapshot.fir.opt;

import com.github.difflib.DiffUtils;
import com.github.difflib.patch.DeltaType;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.LinkedHashMap;
import java.util.List;
import org.intellij.lang.annotations.Language;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.observer.Observer;
import org.prlprg.fir.opt.Optimization;
import org.prlprg.util.Files;
import org.prlprg.util.HtmlStringBuilder;

public class OptimizationLog implements AutoCloseable {
  private final Module module;
  private final LinkedHashMap<Function, LinkedHashMap<Abstraction, ArrayList<Diff>>> diffs =
      new LinkedHashMap<>();
  private String before = "";

  private final Observer observer =
      new Observer() {
        @Override
        public void before(String func, List<Object> args) {
          if (!func.equals("AbstractionOptimization#run")) {
            return;
          }

          var _ = (Optimization) args.get(0);
          var _ = (Function) args.get(1);
          var _ = (AbstractionFeedback) args.get(2);
          var version = (Abstraction) args.get(3);

          before = version.toString();
        }

        @Override
        public void after(String func, List<Object> args, @Nullable Object returnValue) {
          if (!func.equals("AbstractionOptimization#run")) {
            return;
          }

          var opt = (Optimization) args.get(0);
          var function = (Function) args.get(1);
          var _ = (AbstractionFeedback) args.get(2);
          var version = (Abstraction) args.get(3);
          // true or crash (null)
          var changed = returnValue != Boolean.FALSE;

          if (!changed) {
            // Don't record unchanged optimization
            return;
          }

          record(opt, function, version);
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

  private void record(Optimization opt, Function function, Abstraction version) {
    var after = version.toString();
    this.diffs
        .computeIfAbsent(function, _ -> new LinkedHashMap<>())
        .computeIfAbsent(version, _ -> new ArrayList<>())
        .add(new Diff(opt.name(), before, after));
  }

  public void writeHtml(Path outPath) {
    Files.writeString(outPath, renderHtml());
  }

  private String renderHtml() {
    var renderedFunctions = renderFunctions(diffs);
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
                  color-scheme: dark;
                  --page-bg: #090c12;
                  --page-glow: rgba(92, 164, 255, 0.18);
                  --panel-bg: #10151d;
                  --panel-alt: #161d27;
                  --panel-alt-strong: #1c2531;
                  --border: #2b3542;
                  --border-strong: #3a4759;
                  --text: #dde6f2;
                  --muted: #92a2b7;
                  --accent: #7cc4ff;
                  --added-bg: #102a1d;
                  --added-bg-strong: #173924;
                  --added-fg: #71d18c;
                  --deleted-bg: #32171a;
                  --deleted-bg-strong: #492025;
                  --deleted-fg: #ff9d95;
                  --hunk-bg: #13263a;
                  --hunk-fg: #8dc8ff;
                  --line-gutter: #0d1219;
                  --line-gutter-strong: #0a0f15;
                  --skip-bg: #111823;
                  --shadow: 0 16px 40px rgba(0, 0, 0, 0.34);
                }

                * {
                  box-sizing: border-box;
                }

                body {
                  margin: 0;
                  color: var(--text);
                  background:
                      radial-gradient(circle at top, var(--page-glow), transparent 32%),
                      linear-gradient(180deg, var(--page-bg) 0%, #05070b 100%);
                  font-family:
                      ui-sans-serif,
                      -apple-system,
                      BlinkMacSystemFont,
                      "Segoe UI",
                      sans-serif;
                  font-size: 14px;
                }

                main {
                  max-width: 1480px;
                  margin: 0 auto;
                  padding: 24px 18px 56px;
                }

                .hero {
                  display: grid;
                  gap: 14px;
                  padding: 14px 16px;
                  border: 1px solid rgba(58, 71, 89, 0.92);
                  border-radius: 10px;
                  background:
                      radial-gradient(circle at top right, rgba(124, 196, 255, 0.12), transparent 35%),
                      linear-gradient(180deg, rgba(19, 25, 34, 0.96), rgba(16, 21, 29, 0.96)),
                      var(--panel-bg);
                  box-shadow: var(--shadow);
                }

                .hero-top {
                  display: flex;
                  flex-wrap: wrap;
                  justify-content: space-between;
                  align-items: end;
                  gap: 12px;
                }

                .hero h1 {
                  margin: 0;
                  font-size: clamp(1.65rem, 4vw, 2.3rem);
                  line-height: 1.08;
                  letter-spacing: -0.03em;
                }

                .view-toggle {
                  display: inline-flex;
                  padding: 4px;
                  border: 1px solid var(--border);
                  border-radius: 999px;
                  background: rgba(10, 15, 21, 0.92);
                  gap: 4px;
                }

                .view-button {
                  border: 0;
                  border-radius: 999px;
                  padding: 7px 12px;
                  background: transparent;
                  color: var(--muted);
                  font: inherit;
                  font-size: 0.84rem;
                  font-weight: 700;
                  cursor: pointer;
                }

                .view-button.is-active {
                  background: var(--panel-alt-strong);
                  color: var(--text);
                  box-shadow: inset 0 0 0 1px rgba(124, 196, 255, 0.18);
                }

                .workspace {
                  display: grid;
                  grid-template-columns: minmax(320px, 400px) minmax(0, 1fr);
                  gap: 12px;
                  margin-top: 12px;
                  align-items: start;
                }

                .sidebar {
                  position: sticky;
                  top: 18px;
                }

                .sidebar-shell {
                  border: 1px solid var(--border);
                  border-radius: 10px;
                  padding: 0;
                  background:
                      linear-gradient(180deg, rgba(22, 29, 39, 0.96), rgba(16, 21, 29, 0.96)),
                      var(--panel-bg);
                  box-shadow: var(--shadow);
                }

                .sidebar-grid {
                  display: grid;
                  grid-template-columns: minmax(0, 0.9fr) minmax(0, 1.35fr);
                  gap: 0;
                }

                .sidebar-column {
                  min-width: 0;
                  border-right: 1px solid var(--border);
                }

                .sidebar-column:last-child {
                  border-right: 0;
                }

                .sidebar-heading {
                  margin: 0;
                  padding: 7px 9px;
                  background: var(--panel-alt);
                  border-bottom: 1px solid var(--border);
                  color: var(--muted);
                  font-size: 0.73rem;
                  font-weight: 700;
                  letter-spacing: 0.08em;
                  text-transform: uppercase;
                }

                .sidebar-list {
                  display: grid;
                  gap: 0;
                }

                .version-list[hidden] {
                  display: none;
                }

                .sidebar-button {
                  width: 100%;
                  border: 0;
                  border-bottom: 1px solid var(--border);
                  padding: 0 6px;
                  min-height: 26px;
                  background: transparent;
                  color: var(--text);
                  font: inherit;
                  text-align: left;
                  cursor: pointer;
                }

                .sidebar-button:hover {
                  background: var(--panel-alt-strong);
                }

                .sidebar-button.is-active {
                  background: rgba(124, 196, 255, 0.12);
                  box-shadow: inset 2px 0 0 var(--accent);
                }

                .version-button {
                  font-family:
                      ui-monospace,
                      "SFMono-Regular",
                      "SF Mono",
                      Menlo,
                      Consolas,
                      "Liberation Mono",
                      monospace;
                  font-size: 0.74rem;
                  line-height: 1.35;
                }

                .content-column {
                  min-width: 0;
                }

                .version-panel[hidden] {
                  display: none;
                }

                .selection-card {
                  margin-bottom: 0;
                  padding: 10px 12px;
                  border: 1px solid var(--border);
                  background:
                      radial-gradient(circle at top right, rgba(124, 196, 255, 0.09), transparent 40%),
                      linear-gradient(180deg, rgba(22, 29, 39, 0.92), rgba(16, 21, 29, 0.92));
                  box-shadow: var(--shadow);
                }

                .selection-card h2 {
                  margin: 0;
                  font-size: 1.08rem;
                  line-height: 1.2;
                }

                .selection-signature {
                  margin: 6px 0 0;
                  color: var(--accent);
                  font-family:
                      ui-monospace,
                      "SFMono-Regular",
                      "SF Mono",
                      Menlo,
                      Consolas,
                      "Liberation Mono",
                      monospace;
                  font-size: 0.78rem;
                  line-height: 1.45;
                  white-space: pre-wrap;
                  word-break: break-word;
                }

                .selection-meta {
                  margin: 8px 0 0;
                  color: var(--muted);
                  font-size: 0.82rem;
                }

                .optimizations {
                  margin: 0;
                  padding: 0;
                  list-style: none;
                  display: grid;
                  gap: 0;
                  border-radius: 10px;
                }

                .optimization {
                  overflow: hidden;
                  border: 1px solid var(--border);
                  background: var(--panel-bg);
                  box-shadow: var(--shadow);
                }

                .optimization .special {
                  border-color: var(--accent);
                  background: linear-gradient(180deg, rgba(124, 196, 255, 0.12), transparent 40%);
                }

                .optimizations > li + li {
                  margin-top: -1px;
                }

                .optimization-header {
                  display: flex;
                  justify-content: space-between;
                  align-items: center;
                  gap: 16px;
                  padding: 8px 10px;
                  cursor: pointer;
                  border-bottom: 1px solid var(--border);
                  background: linear-gradient(180deg, rgba(22, 29, 39, 0.96), rgba(16, 21, 29, 0.96));
                  list-style: none;
                }

                .optimization-header::-webkit-details-marker {
                  display: none;
                }

                .optimization-header::marker {
                  content: "";
                }

                .optimization-header:focus-visible {
                  outline: 2px solid var(--accent);
                  outline-offset: -2px;
                }

                .optimization-header h2 {
                  margin: 0;
                  font-size: 0.92rem;
                  line-height: 1.25;
                  flex-grow: 1;
                }

                .optimization-header p {
                  margin: 2px 0;
                  color: var(--muted);
                  font-size: 0.76rem;
                }

                .collapse-indicator {
                  margin-top: -4px;
                  width: 10px;
                  height: 10px;
                  border-right: 2px solid var(--muted);
                  border-bottom: 2px solid var(--muted);
                  transform: rotate(45deg);
                  transition: transform 140ms ease;
                }

                details[open] .collapse-indicator {
                  transform: rotate(225deg);
                }

                .optimization-body {
                  padding: 0;
                }

                .diffs {
                  display: grid;
                  gap: 0;
                  overflow-x: auto;
                }

                .diff-view[data-view="split"] {
                  display: none;
                }

                body[data-diff-view="split"] .diff-view[data-view="split"] {
                  display: block;
                }

                body[data-diff-view="split"] .diff-view[data-view="unified"] {
                  display: none;
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
                  font-size: 0.8rem;
                  line-height: 1.45;
                }

                .diff-table-split {
                  min-width: 920px;
                }

                td {
                  padding: 0;
                  vertical-align: top;
                }

                .line-no {
                  width: 52px;
                  padding: 0 9px;
                  text-align: right;
                  color: var(--muted);
                  background: var(--line-gutter);
                  border-right: 1px solid var(--border);
                  user-select: none;
                }

                .marker {
                  width: 24px;
                  padding: 0 5px;
                  text-align: center;
                  border-right: 1px solid var(--border);
                  user-select: none;
                  font-weight: 700;
                  color: var(--muted);
                  background: var(--line-gutter);
                }

                .code {
                  padding: 0 12px;
                  white-space: pre-wrap;
                  word-break: break-word;
                  background: var(--panel-bg);
                }

                .before-divider {
                  border-left: 1px solid var(--border-strong);
                }

                tr.context td {
                  background: var(--panel-bg);
                }

                tr.insert td {
                  background: var(--added-bg);
                }

                tr.insert .marker {
                  background: var(--added-bg-strong);
                  color: var(--added-fg);
                }

                tr.delete td {
                  background: var(--deleted-bg);
                }

                tr.delete .marker {
                  background: var(--deleted-bg-strong);
                  color: var(--deleted-fg);
                }

                .diff-table-split tr.context .marker {
                  background: var(--line-gutter);
                }

                .diff-table-split tr.change .before-side {
                  background: var(--deleted-bg);
                }

                .diff-table-split tr.change .after-side {
                  background: var(--added-bg);
                }

                .diff-table-split tr.delete .before-side {
                  background: var(--deleted-bg);
                }

                .diff-table-split tr.insert .after-side {
                  background: var(--added-bg);
                }

                .diff-table-split tr.insert .before-side.line-no,
                .diff-table-split tr.insert .before-side.marker,
                .diff-table-split tr.delete .after-side.line-no,
                .diff-table-split tr.delete .after-side.marker {
                  background: var(--line-gutter);
                }

                .diff-table-split tr.insert .before-side.code,
                .diff-table-split tr.delete .after-side.code {
                  background: var(--panel-bg);
                }

                .diff-table-split tr.change .before-marker,
                .diff-table-split tr.delete .before-marker {
                  background: var(--deleted-bg-strong);
                  color: var(--deleted-fg);
                }

                .diff-table-split tr.change .after-marker,
                .diff-table-split tr.insert .after-marker {
                  background: var(--added-bg-strong);
                  color: var(--added-fg);
                }

                .full-code .code {
                  background: var(--panel-bg);
                }

                tr.skip td {
                  padding: 0;
                  color: var(--muted);
                  background: var(--skip-bg);
                  border-top: 1px solid var(--border);
                  border-bottom: 1px solid var(--border);
                }

                .expand-context {
                  width: 100%;
                  padding: 8px 12px;
                  border: 0;
                  background: transparent;
                  color: var(--accent);
                  font: inherit;
                  font-size: 0.78rem;
                  font-weight: 600;
                  text-align: left;
                  cursor: pointer;
                }

                .expand-context:hover {
                  background: rgba(124, 196, 255, 0.08);
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
                  margin-top: 18px;
                  padding: 32px 24px;
                  border: 1px dashed var(--border-strong);
                  border-radius: 10px;
                  background: rgba(16, 21, 29, 0.84);
                  text-align: center;
                  color: var(--muted);
                }

                @media (max-width: 760px) {
                  main {
                    padding-inline: 12px;
                  }

                  .workspace {
                    grid-template-columns: 1fr;
                  }

                  .sidebar {
                    position: static;
                  }

                  .sidebar-grid {
                    grid-template-columns: minmax(0, 1fr) minmax(0, 1fr);
                  }

                  .hero-top,
                  .optimization-header {
                    flex-direction: column;
                    align-items: start;
                  }

                  .view-toggle {
                    width: 100%;
                    justify-content: space-between;
                  }

                  .line-no {
                    width: 42px;
                    padding-inline: 6px;
                  }

                  .marker {
                    width: 22px;
                    padding-inline: 4px;
                  }

                  .code {
                    padding-inline: 10px;
                  }

                  .optimization-body {
                    padding: 10px;
                  }
                }
              </style>
            </head>
            <body data-diff-view="unified">
              <main>
                <section class="hero">
                  <div class="hero-top">
                    <h1>Optimization log</h1>
                    <div class="view-toggle" role="group" aria-label="Diff view">
                      <button type="button" class="view-button is-active" aria-pressed="true" data-view-button="unified">Unified</button>
                      <button type="button" class="view-button" aria-pressed="false" data-view-button="split">Side by side</button>
                    </div>
                  </div>
                </section>
            """);

    if (renderedFunctions.isEmpty()) {
      html.append(
          """
                <section class="empty">No optimization changed the module.</section>
              </main>
              <script>
                (() => {
                  const body = document.body;
                  for (const button of document.querySelectorAll("[data-view-button]")) {
                    button.addEventListener("click", () => {
                      body.dataset.diffView = button.dataset.viewButton;
                      for (const candidate of document.querySelectorAll("[data-view-button]")) {
                        const active = candidate === button;
                        candidate.classList.toggle("is-active", active);
                        candidate.setAttribute("aria-pressed", String(active));
                      }
                    });
                  }
                })();
              </script>
            </body>
            </html>
            """);
      return html.toString();
    }

    var initialFunction = renderedFunctions.getFirst();
    var initialVersion = initialFunction.versions().getFirst();

    html.append(
        """
            <div class="workspace">
              <aside class="sidebar">
                <div class="sidebar-shell">
                  <div class="sidebar-grid">
                    <section class="sidebar-column">
                      <h2 class="sidebar-heading">Functions</h2>
                      <div class="sidebar-list">
            """);
    for (var function : renderedFunctions) {
      html.append("<button type=\"button\" class=\"sidebar-button");
      if (function.id().equals(initialFunction.id())) {
        html.append(" is-active");
      }
      html.append("\" data-function-tab=\"").append(function.id()).append("\">");
      html.append(escape(function.label()));
      html.append("</button>");
    }
    html.append(
        """
                      </div>
                    </section>
                    <section class="sidebar-column">
                      <h2 class="sidebar-heading">Versions</h2>
                      <div class="sidebar-list">
            """);
    for (var function : renderedFunctions) {
      html.append("<div class=\"version-list\" data-version-list=\"")
          .append(function.id())
          .append("\"");
      if (!function.id().equals(initialFunction.id())) {
        html.append(" hidden");
      }
      html.append(">");
      for (var version : function.versions()) {
        html.append("<button type=\"button\" class=\"sidebar-button version-button");
        if (version.id().equals(initialVersion.id())) {
          html.append(" is-active");
        }
        html.append("\" data-function-id=\"")
            .append(function.id())
            .append("\" data-version-tab=\"")
            .append(version.id())
            .append("\">");
        html.append(escape(version.signatureLabel()));
        html.append("</button>");
      }
      html.append("</div>");
    }
    html.append(
        """
                      </div>
                    </section>
                  </div>
                </div>
              </aside>
              <section class="content-column">
        """);

    for (var function : renderedFunctions) {
      for (var version : function.versions()) {
        appendVersionPanel(
            html,
            function,
            version,
            function.id().equals(initialFunction.id()) && version.id().equals(initialVersion.id()));
      }
    }

    html.append(
        """
              </section>
            </div>
          </main>
          <script>
            (() => {
              const body = document.body;

              for (const button of document.querySelectorAll("[data-view-button]")) {
                button.addEventListener("click", () => {
                  body.dataset.diffView = button.dataset.viewButton;
                  for (const candidate of document.querySelectorAll("[data-view-button]")) {
                    const active = candidate === button;
                    candidate.classList.toggle("is-active", active);
                    candidate.setAttribute("aria-pressed", String(active));
                  }
                });
              }

              const functionButtons = [...document.querySelectorAll("[data-function-tab]")];
              const versionLists = [...document.querySelectorAll("[data-version-list]")];
              const versionButtons = [...document.querySelectorAll("[data-version-tab]")];
              const versionPanels = [...document.querySelectorAll("[data-version-panel]")];

              const selectVersion = (functionId, versionId) => {
                for (const button of versionButtons) {
                  const active =
                      button.dataset.functionId === functionId
                      && button.dataset.versionTab === versionId;
                  button.classList.toggle("is-active", active);
                }

                for (const panel of versionPanels) {
                  const active =
                      panel.dataset.functionPanel === functionId
                      && panel.dataset.versionPanel === versionId;
                  panel.hidden = !active;
                }
              };

              const selectFunction = (functionId, preferredVersionId) => {
                for (const button of functionButtons) {
                  button.classList.toggle("is-active", button.dataset.functionTab === functionId);
                }

                for (const list of versionLists) {
                  list.hidden = list.dataset.versionList !== functionId;
                }

                const visibleVersionButtons =
                    versionButtons.filter(button => button.dataset.functionId === functionId);
                const selectedVersion =
                    visibleVersionButtons.find(
                        button => button.dataset.versionTab === preferredVersionId)
                    ?? visibleVersionButtons[0];
                if (selectedVersion) {
                  selectVersion(functionId, selectedVersion.dataset.versionTab);
                }
              };

              for (const button of functionButtons) {
                button.addEventListener("click", () => {
                  const currentVersion =
                      versionButtons.find(
                          candidate =>
                              candidate.classList.contains("is-active")
                              && candidate.dataset.functionId === button.dataset.functionTab);
                  selectFunction(
                      button.dataset.functionTab,
                      currentVersion ? currentVersion.dataset.versionTab : null);
                });
              }

              for (const button of versionButtons) {
                button.addEventListener("click", () => {
                  selectFunction(button.dataset.functionId, button.dataset.versionTab);
                });
              }

              for (const button of document.querySelectorAll("[data-expand-group]")) {
                button.addEventListener("click", () => {
                  const group = button.dataset.expandGroup;
                  for (const row of document.querySelectorAll(`[data-hidden-group="${group}"]`)) {
                    row.hidden = false;
                  }
                  for (const control of document.querySelectorAll(`[data-expand-control="${group}"]`)) {
                    control.hidden = true;
                  }
                });
              }

              const initialFunction = functionButtons.find(button => button.classList.contains("is-active"));
              const initialVersion = versionButtons.find(button => button.classList.contains("is-active"));
              if (initialFunction && initialVersion) {
                selectFunction(initialFunction.dataset.functionTab, initialVersion.dataset.versionTab);
              }
            })();
          </script>
        </body>
        </html>
        """);
    return html.toString();
  }

  private static List<RenderedFunction> renderFunctions(
      LinkedHashMap<Function, LinkedHashMap<Abstraction, ArrayList<Diff>>> diffs) {
    var renderedFunctions = new ArrayList<RenderedFunction>();
    var functionIndex = 0;
    for (var functionEntry : diffs.entrySet()) {
      var renderedVersions = new ArrayList<RenderedVersion>();
      var versionIndex = 0;
      var functionAdditions = 0;
      var functionDeletions = 0;
      var functionOptimizations = 0;

      for (var versionEntry : functionEntry.getValue().entrySet()) {
        var renderedDiffs =
            versionEntry.getValue().stream().map(OptimizationLog::renderDiff).toList();
        if (renderedDiffs.isEmpty()) {
          continue;
        }

        var diffStats = summarizeDiffs(renderedDiffs);
        renderedVersions.add(
            new RenderedVersion(
                "function-" + functionIndex + "-version-" + versionIndex,
                versionEntry.getKey().signature().toString(),
                renderedDiffs,
                diffStats,
                versionEntry.getValue().getFirst().before(),
                versionEntry.getValue().getLast().after()));
        functionAdditions += diffStats.additions();
        functionDeletions += diffStats.deletions();
        functionOptimizations += renderedDiffs.size();
        versionIndex++;
      }

      if (!renderedVersions.isEmpty()) {
        renderedFunctions.add(
            new RenderedFunction(
                "function-" + functionIndex,
                functionEntry.getKey().name().name(),
                renderedVersions,
                new DiffStats(functionAdditions, functionDeletions),
                functionOptimizations));
        functionIndex++;
      }
    }
    return renderedFunctions;
  }

  private static void appendVersionPanel(
      HtmlStringBuilder html,
      RenderedFunction function,
      RenderedVersion version,
      boolean selected) {
    html.append("<section class=\"version-panel\" data-function-panel=\"")
        .append(function.id())
        .append("\" data-version-panel=\"")
        .append(version.id())
        .append("\"");
    if (!selected) {
      html.append(" hidden");
    }
    html.append(">");
    html.append(
        """
            <div class="selection-card">
              <h2>""");
    html.append(escape(function.label()));
    html.append(
        """
              </h2>
              <p class="selection-signature">""");
    html.append(escape(version.signatureLabel()));
    html.append(
        """
              </p>
              <p class="selection-meta">""");
    html.append(version.diffs().size()).append(" changed optimizations · +");
    html.append(version.stats().additions()).append(" added · -");
    html.append(version.stats().deletions()).append(" removed");
    html.append(
        """
              </p>
            </div>
            <ol class="optimizations">
        """);
    appendFullVersionSection(html, "Initial", version.initialText());
    for (var i = 0; i < version.diffs().size(); i++) {
      appendRenderedDiff(
          html,
          version.diffs().get(i),
          i,
          version.diffs().size(),
          version.id() + "-diff-" + i + "-skip-");
    }
    appendFullVersionSection(html, "Final", version.finalText());
    html.append(
        """
            </ol>
          </section>
        """);
  }

  private static void appendFullVersionSection(HtmlStringBuilder html, String title, String text) {
    var lines = splitLines(text);
    html.append(
        """
            <li>
              <details class="optimization special">
                <summary class="optimization-header">
                  <h2>""");
    html.append(escape(title));
    html.append(
        """
                  </h2>
                  <p>""");
    html.append(lines.size()).append(" lines");
    html.append(
        """
                  </p>
                  <span class="collapse-indicator" aria-hidden="true"></span>
                </summary>
                <div class="optimization-body">
                  <section class="diffs">
                    <table class="diff-table diff-table-full">
                      <tbody>
        """);
    appendFullTextRows(html, lines);
    html.append(
        """
                      </tbody>
                    </table>
                  </section>
                </div>
              </details>
            </li>
        """);
  }

  private static void appendRenderedDiff(
      HtmlStringBuilder html, RenderedDiff diff, int index, int total, String groupPrefix) {
    html.append(
        """
            <li>
              <details class="optimization">
                <summary class="optimization-header">
                  <h2>""");
    html.append(escape(diff.optName()));
    html.append(
        """
                  </h2>
                  <p>""");
    html.append(index + 1).append(" of ").append(total);
    html.append(" · ").append(diff.stats().additions()).append(" added · ");
    html.append(diff.stats().deletions()).append(" removed");
    html.append(
        """
                  </p>
                  <span class="collapse-indicator" aria-hidden="true"></span>
                </summary>
                <div class="optimization-body">
                  <section class="diffs">
                    <div class="diff-view" data-view="unified">
                      <table class="diff-table diff-table-unified">
                        <tbody>
        """);
    appendUnifiedDiffBody(html, diff, groupPrefix);
    html.append(
        """
                        </tbody>
                      </table>
                    </div>
                    <div class="diff-view" data-view="split">
                      <table class="diff-table diff-table-split">
                        <tbody>
        """);
    appendSplitDiffBody(html, diff, groupPrefix);
    html.append(
        """
                        </tbody>
                      </table>
                    </div>
                  </section>
                </div>
              </details>
            </li>
        """);
  }

  private static void appendUnifiedDiffBody(
      HtmlStringBuilder html, RenderedDiff diff, String groupPrefix) {
    var previousHunkEnd = 0;
    var hiddenGroupIndex = 0;
    for (var hunk : diff.hunks()) {
      if (hunk.start() > previousHunkEnd) {
        @Language("html")
        var groupId = groupPrefix + hiddenGroupIndex++;
        appendSkipRow(html, hunk.start() - previousHunkEnd, groupId, 4);
        appendUnifiedHiddenRows(html, diff.rows().subList(previousHunkEnd, hunk.start()), groupId);
      }

      for (var row : diff.rows().subList(hunk.start(), hunk.end())) {
        appendUnifiedRow(html, row);
      }
      previousHunkEnd = hunk.end();
    }

    if (previousHunkEnd < diff.rows().size()) {
      @Language("html")
      var groupId = groupPrefix + hiddenGroupIndex;
      appendSkipRow(html, diff.rows().size() - previousHunkEnd, groupId, 4);
      appendUnifiedHiddenRows(
          html, diff.rows().subList(previousHunkEnd, diff.rows().size()), groupId);
    }
  }

  private static void appendSplitDiffBody(
      HtmlStringBuilder html, RenderedDiff diff, String groupPrefix) {
    var previousHunkEnd = 0;
    var hiddenGroupIndex = 0;
    for (var hunk : diff.hunks()) {
      if (hunk.start() > previousHunkEnd) {
        @Language("html")
        var groupId = groupPrefix + hiddenGroupIndex++;
        appendSkipRow(html, hunk.start() - previousHunkEnd, groupId, 6);
        appendSplitHiddenRows(html, diff.rows().subList(previousHunkEnd, hunk.start()), groupId);
      }

      for (var row : diff.rows().subList(hunk.start(), hunk.end())) {
        appendSplitRow(html, row);
      }
      previousHunkEnd = hunk.end();
    }

    if (previousHunkEnd < diff.rows().size()) {
      @Language("html")
      var groupId = groupPrefix + hiddenGroupIndex;
      appendSkipRow(html, diff.rows().size() - previousHunkEnd, groupId, 6);
      appendSplitHiddenRows(
          html, diff.rows().subList(previousHunkEnd, diff.rows().size()), groupId);
    }
  }

  private static void appendSkipRow(
      HtmlStringBuilder html, int hiddenLines, @Language("html") String groupId, int colSpan) {
    html.append("<tr class=\"skip\" data-expand-control=\"").append(groupId).append("\">");
    html.append("<td colspan=\"").append(colSpan).append("\">");
    html.append("<button type=\"button\" class=\"expand-context\" data-expand-group=\"")
        .append(groupId)
        .append("\">Show ");
    html.append(hiddenLines)
        .append(hiddenLines == 1 ? " unchanged line" : " unchanged lines")
        .append("</button></td></tr>");
  }

  private static void appendUnifiedHiddenRows(
      HtmlStringBuilder html, List<DiffRow> rows, @Language("html") String groupId) {
    for (var row : rows) {
      appendUnifiedRow(html, row, groupId);
    }
  }

  private static void appendSplitHiddenRows(
      HtmlStringBuilder html, List<DiffRow> rows, @Language("html") String groupId) {
    for (var row : rows) {
      appendSplitRow(html, row, groupId);
    }
  }

  private static void appendUnifiedRow(HtmlStringBuilder html, DiffRow row) {
    appendUnifiedRow(html, row, null);
  }

  private static void appendUnifiedRow(
      HtmlStringBuilder html, DiffRow row, @Language("html") @Nullable String hiddenGroupId) {
    switch (row.kind()) {
      case CONTEXT ->
          appendUnifiedTableRow(
              html,
              LineKind.CONTEXT,
              row.beforeLineNo(),
              row.afterLineNo(),
              row.beforeHtml(),
              hiddenGroupId);
      case DELETE ->
          appendUnifiedTableRow(
              html, LineKind.DELETE, row.beforeLineNo(), 0, row.beforeHtml(), hiddenGroupId);
      case INSERT ->
          appendUnifiedTableRow(
              html, LineKind.INSERT, 0, row.afterLineNo(), row.afterHtml(), hiddenGroupId);
      case CHANGE -> {
        appendUnifiedTableRow(
            html, LineKind.DELETE, row.beforeLineNo(), 0, row.beforeHtml(), hiddenGroupId);
        appendUnifiedTableRow(
            html, LineKind.INSERT, 0, row.afterLineNo(), row.afterHtml(), hiddenGroupId);
      }
    }
  }

  private static void appendUnifiedTableRow(
      HtmlStringBuilder html,
      LineKind kind,
      int beforeLineNo,
      int afterLineNo,
      @Language("html") String lineHtml,
      @Language("html") @Nullable String hiddenGroupId) {
    html.append("<tr class=\"").append(kind.cssClass()).append("\"");
    if (hiddenGroupId != null) {
      html.append(" data-hidden-group=\"").append(hiddenGroupId).append("\" hidden");
    }
    html.append(">");
    appendLineNumber(html, beforeLineNo);
    appendLineNumber(html, afterLineNo);
    html.append("<td class=\"marker\">").append(kind.marker()).append("</td>");
    html.append("<td class=\"code\">").append(lineHtml).append("</td>");
    html.append("</tr>");
  }

  private static void appendSplitRow(HtmlStringBuilder html, DiffRow row) {
    appendSplitRow(html, row, null);
  }

  private static void appendSplitRow(
      HtmlStringBuilder html, DiffRow row, @Language("html") @Nullable String hiddenGroupId) {
    html.append("<tr class=\"").append(row.kind().cssClass()).append("\"");
    if (hiddenGroupId != null) {
      html.append(" data-hidden-group=\"").append(hiddenGroupId).append("\" hidden");
    }
    html.append(">");
    appendSplitCell(html, "line-no before-side", row.beforeLineNo());
    appendSplitMarker(html, "marker before-side before-marker", row.beforeMarker());
    appendCodeCell(html, "code before-side", row.beforeHtml());
    appendSplitCell(html, "line-no after-side before-divider", row.afterLineNo());
    appendSplitMarker(html, "marker after-side after-marker", row.afterMarker());
    appendCodeCell(html, "code after-side", row.afterHtml());
    html.append("</tr>");
  }

  private static void appendLineNumber(HtmlStringBuilder html, int lineNo) {
    html.append("<td class=\"line-no\">");
    if (lineNo != 0) {
      html.append(lineNo);
    }
    html.append("</td>");
  }

  private static void appendSplitCell(
      HtmlStringBuilder html, @Language("html") String cssClass, int lineNo) {
    html.append("<td class=\"").append(cssClass).append("\">");
    if (lineNo != 0) {
      html.append(lineNo);
    }
    html.append("</td>");
  }

  private static void appendSplitMarker(
      HtmlStringBuilder html, @Language("html") String cssClass, @Language("html") String marker) {
    html.append("<td class=\"").append(cssClass).append("\">");
    html.append(marker);
    html.append("</td>");
  }

  private static void appendCodeCell(
      HtmlStringBuilder html,
      @Language("html") String cssClass,
      @Language("html") String codeHtml) {
    html.append("<td class=\"").append(cssClass).append("\">");
    html.append(codeHtml);
    html.append("</td>");
  }

  private static void appendFullTextRows(HtmlStringBuilder html, List<String> lines) {
    if (lines.isEmpty()) {
      html.append("<tr class=\"context full-code\">");
      appendLineNumber(html, 1);
      appendCodeCell(html, "code", "");
      html.append("</tr>");
      return;
    }

    for (var i = 0; i < lines.size(); i++) {
      html.append("<tr class=\"context full-code\">");
      appendLineNumber(html, i + 1);
      appendCodeCell(html, "code", escape(lines.get(i)));
      html.append("</tr>");
    }
  }

  private static RenderedDiff renderDiff(Diff diff) {
    var rows = renderRows(diff);
    return new RenderedDiff(diff.optName(), rows, hunks(rows), summarizeRows(rows));
  }

  private static List<DiffRow> renderRows(Diff diff) {
    var beforeLines = splitLines(diff.before());
    var afterLines = splitLines(diff.after());
    var patch = DiffUtils.diff(beforeLines, afterLines);
    var rows = new ArrayList<DiffRow>();
    var beforeIndex = 0;
    var afterIndex = 0;

    for (var delta : patch.getDeltas()) {
      var sourcePosition = delta.getSource().getPosition();
      var targetPosition = delta.getTarget().getPosition();
      while (beforeIndex < sourcePosition && afterIndex < targetPosition) {
        var html = escape(beforeLines.get(beforeIndex));
        rows.add(new DiffRow(RowKind.CONTEXT, beforeIndex + 1, afterIndex + 1, html, html));
        beforeIndex++;
        afterIndex++;
      }

      var deleted = delta.getSource().getLines();
      var inserted = delta.getTarget().getLines();
      if (delta.getType() == DeltaType.CHANGE) {
        var pairedLines = Math.min(deleted.size(), inserted.size());
        for (var i = 0; i < pairedLines; i++) {
          var inlineDiff = inlineDiff(deleted.get(i), inserted.get(i));
          rows.add(
              new DiffRow(
                  RowKind.CHANGE,
                  beforeIndex + 1,
                  afterIndex + 1,
                  inlineDiff.beforeHtml(),
                  inlineDiff.afterHtml()));
          beforeIndex++;
          afterIndex++;
        }
        for (var i = pairedLines; i < deleted.size(); i++) {
          rows.add(new DiffRow(RowKind.DELETE, beforeIndex + 1, 0, escape(deleted.get(i)), ""));
          beforeIndex++;
        }
        for (var i = pairedLines; i < inserted.size(); i++) {
          rows.add(new DiffRow(RowKind.INSERT, 0, afterIndex + 1, "", escape(inserted.get(i))));
          afterIndex++;
        }
      } else {
        for (var line : deleted) {
          rows.add(new DiffRow(RowKind.DELETE, beforeIndex + 1, 0, escape(line), ""));
          beforeIndex++;
        }
        for (var line : inserted) {
          rows.add(new DiffRow(RowKind.INSERT, 0, afterIndex + 1, "", escape(line)));
          afterIndex++;
        }
      }
    }

    while (beforeIndex < beforeLines.size() && afterIndex < afterLines.size()) {
      var html = escape(beforeLines.get(beforeIndex));
      rows.add(new DiffRow(RowKind.CONTEXT, beforeIndex + 1, afterIndex + 1, html, html));
      beforeIndex++;
      afterIndex++;
    }

    while (beforeIndex < beforeLines.size()) {
      rows.add(
          new DiffRow(
              RowKind.DELETE, beforeIndex + 1, 0, escape(beforeLines.get(beforeIndex)), ""));
      beforeIndex++;
    }
    while (afterIndex < afterLines.size()) {
      rows.add(
          new DiffRow(RowKind.INSERT, 0, afterIndex + 1, "", escape(afterLines.get(afterIndex))));
      afterIndex++;
    }

    return rows;
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

  private static List<Hunk> hunks(List<DiffRow> rows) {
    var hunks = new ArrayList<Hunk>();
    var change = 0;

    while (change < rows.size()) {
      while (change < rows.size() && rows.get(change).kind() == RowKind.CONTEXT) {
        change++;
      }
      if (change == rows.size()) {
        break;
      }

      var start = Math.max(change - CONTEXT_LINES, 0);
      var end = Math.min(change + CONTEXT_LINES + 1, rows.size());
      var i = change + 1;
      while (i < rows.size()) {
        if (rows.get(i).kind() != RowKind.CONTEXT) {
          end = Math.min(i + CONTEXT_LINES + 1, rows.size());
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

  private static DiffStats summarizeRows(List<DiffRow> rows) {
    var additions = 0;
    var deletions = 0;
    for (var row : rows) {
      switch (row.kind()) {
        case INSERT -> additions++;
        case DELETE -> deletions++;
        case CHANGE -> {
          additions++;
          deletions++;
        }
        case CONTEXT -> {}
      }
    }
    return new DiffStats(additions, deletions);
  }

  private static DiffStats summarizeDiffs(List<RenderedDiff> diffs) {
    var additions = 0;
    var deletions = 0;
    for (var diff : diffs) {
      additions += diff.stats().additions();
      deletions += diff.stats().deletions();
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

  private record RenderedFunction(
      String id,
      String label,
      List<RenderedVersion> versions,
      DiffStats stats,
      int optimizationCount) {}

  private record RenderedVersion(
      String id,
      String signatureLabel,
      List<RenderedDiff> diffs,
      DiffStats stats,
      String initialText,
      String finalText) {}

  private record RenderedDiff(
      String optName, List<DiffRow> rows, List<Hunk> hunks, DiffStats stats) {}

  private record DiffStats(int additions, int deletions) {}

  private record InlineDiff(String beforeHtml, String afterHtml) {}

  private record Hunk(int start, int end) {}

  private record DiffRow(
      RowKind kind, int beforeLineNo, int afterLineNo, String beforeHtml, String afterHtml) {
    private String beforeMarker() {
      return switch (kind) {
        case DELETE, CHANGE -> "-";
        default -> " ";
      };
    }

    private String afterMarker() {
      return switch (kind) {
        case INSERT, CHANGE -> "+";
        default -> " ";
      };
    }
  }

  private enum RowKind {
    CONTEXT("context"),
    DELETE("delete"),
    INSERT("insert"),
    CHANGE("change");

    private final String cssClass;

    RowKind(String cssClass) {
      this.cssClass = cssClass;
    }

    private String cssClass() {
      return cssClass;
    }
  }

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
