fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3884984801;
    st `.code2html_payload_console` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3884984801(type, topic, package, enhancedHTML, Rhome) {
  (reg type:*, reg topic:*, reg package:*, reg enhancedHTML:*, reg Rhome:*) -+> V { var type:*, var topic:*, var package:*, var enhancedHTML:*, reg enhancedHTML_isMissing:L, reg enhancedHTML_orDefault:*, var Rhome:*, reg Rhome_isMissing:L, reg Rhome_orDefault:*, reg sprintf:cls, reg type1:*, reg type2:V, reg p:p(V +), reg topic1:*, reg topic2:V, reg p1:p(V +), reg package1:*, reg package2:V, reg p2:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg gettextf:cls, reg snippet:*, reg snippet1:V, reg p3:p(V +), reg r7:V, reg enhancedHTML1:*, reg enhancedHTML2:V, reg c:L, reg gettext:cls, reg r8:V, reg r9:V, reg gettext1:cls, reg r10:V, reg c1:cls, reg r11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg paste:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg HTMLheader:cls, reg Rhome1:*, reg Rhome2:V, reg p4:p(V +), reg r17:V, reg msg:*, reg msg1:V, reg c2:cls, reg r18:V, reg p5:p(V +), reg r20:V, reg list:cls, reg r21:V |
    mkenv;
    st type = type;
    st topic = topic;
    st package = package;
    enhancedHTML_isMissing = missing.0(enhancedHTML);
    if enhancedHTML_isMissing then L0(TRUE) else L0(enhancedHTML);
  L0(enhancedHTML_orDefault):
    st enhancedHTML = enhancedHTML_orDefault;
    Rhome_isMissing = missing.0(Rhome);
    if Rhome_isMissing then L1("") else L1(Rhome);
  L1(Rhome_orDefault):
    st Rhome = Rhome_orDefault;
    sprintf = ldf sprintf;
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
    p = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    p1 = prom<V +>{
      topic1 = ld topic;
      topic2 = force? topic1;
      checkMissing(topic2);
      return topic2;
    };
    p2 = prom<V +>{
      package1 = ld package;
      package2 = force? package1;
      checkMissing(package2);
      return package2;
    };
    r3 = dyn sprintf("%s(%s, package = \"%s\")", p, p1, p2);
    check L7() else D1();
  D1():
    deopt 6 [r3];
  L7():
    st snippet = r3;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L2(r5):
    st msg = r5;
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  L8():
    gettextf = ldf gettextf;
    check L10() else D2();
  L9():
    r4 = dyn base(<lang gettextf("<p><code class='language-R'>%s</code> was run in the console.</p>", snippet)>, <lang if(enhancedHTML, gettext("<p>To view output in the browser, the <a href='https://CRAN.R-project.org/package=knitr'>knitr</a> package must be installed.</p>"), gettext("<p>To view output in the browser, the <a href='https://CRAN.R-project.org/package=knitr'>knitr</a> package must be installed and the environment variable <code>_R_HELP_ENABLE_ENHANCED_HTML_</code> must be set to TRUE.</p>"))>);
    goto L2(r4);
  D2():
    deopt 11 [];
  L5(r13):
    popenv;
    return r13;
  L10():
    p3 = prom<V +>{
      snippet = ld snippet;
      snippet1 = force? snippet;
      checkMissing(snippet1);
      return snippet1;
    };
    r7 = dyn gettextf("<p><code class='language-R'>%s</code> was run in the console.</p>", p3);
    check L11() else D3();
  L20():
    paste = ldf paste;
    check L22() else D10();
  L21():
    r12 = dyn base1[payload](<lang paste(c(HTMLheader("R example", Rhome=Rhome, logo=FALSE, up=NULL, top=NULL), msg, "\n</div></body></html>"), collapse="\n")>);
    goto L5(r12);
  D3():
    deopt 14 [r7];
  D10():
    deopt 31 [];
  L11():
    enhancedHTML1 = ld enhancedHTML;
    check L12() else D4();
  L22():
    p5 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r15):
      return r15;
    L1():
      HTMLheader = ldf HTMLheader;
      p4 = prom<V +>{
        Rhome1 = ld Rhome;
        Rhome2 = force? Rhome1;
        checkMissing(Rhome2);
        return Rhome2;
      };
      r17 = dyn HTMLheader[, Rhome, logo, up, top]("R example", p4, FALSE, NULL, NULL);
      msg = ld msg;
      msg1 = force? msg;
      checkMissing(msg1);
      c2 = ldf c in base;
      r18 = dyn c2(r17, msg1, "\n</div></body></html>");
      goto L0(r18);
    L2():
      r14 = dyn base2(<lang HTMLheader("R example", Rhome=Rhome, logo=FALSE, up=NULL, top=NULL)>, <sym msg>, "\n</div></body></html>");
      goto L0(r14);
    };
    r20 = dyn paste[, collapse](p5, "\n");
    check L23() else D11();
  D4():
    deopt 15 [enhancedHTML1];
  D11():
    deopt 35 [r20];
  L12():
    enhancedHTML2 = force? enhancedHTML1;
    checkMissing(enhancedHTML2);
    c = `as.logical`(enhancedHTML2);
    if c then L13() else L3();
  L23():
    list = ldf list in base;
    r21 = dyn list(r20);
    check L24() else D12();
  D12():
    deopt 38 [r21];
  L3():
    gettext1 = ldf gettext;
    check L17() else D7();
  L4(r9):
    c1 = ldf c in base;
    r11 = dyn c1(r7, r9);
    check L19() else D9();
  L13():
    gettext = ldf gettext;
    check L14() else D5();
  L24():
    goto L5(r21);
  D5():
    deopt 18 [];
  D7():
    deopt 22 [];
  D9():
    deopt 26 [r11];
  L14():
    r8 = dyn gettext("<p>To view output in the browser, the <a href='https://CRAN.R-project.org/package=knitr'>knitr</a> package must be installed.</p>");
    check L15() else D6();
  L17():
    r10 = dyn gettext1("<p>To view output in the browser, the <a href='https://CRAN.R-project.org/package=knitr'>knitr</a> package must be installed and the environment variable <code>_R_HELP_ENABLE_ENHANCED_HTML_</code> must be set to TRUE.</p>");
    check L18() else D8();
  L19():
    goto L2(r11);
  D6():
    deopt 20 [r8];
  D8():
    deopt 24 [r10];
  L15():
    goto L4(r8);
  L18():
    goto L4(r10);
  }
}