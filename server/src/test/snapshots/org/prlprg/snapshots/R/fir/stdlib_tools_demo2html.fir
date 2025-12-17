fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3663197550;
    st demo2html = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3663197550(topic, package, Rhome, env) {
  (reg topic:*, reg package:*, reg Rhome:*, reg env:*) -+> V { var topic:*, var package:*, var Rhome:*, reg Rhome_isMissing:L, reg Rhome_orDefault:*, var env:*, reg env_isMissing:L, reg env_orDefault:*, reg config_val_to_logical:cls, reg Sys_getenv:cls, reg r:V, reg p:p(V +), reg r2:V, reg enhancedHTML:*, reg enhancedHTML1:V, reg r3:V, reg c:L, reg c1:V, reg requireNamespace:cls, reg r4:V, reg r5:V, reg c3:L, reg c4:V, reg c6:L, reg __:cls, reg r6:V, reg r7:cls, reg topic1:*, reg topic2:V, reg p1:p(V +), reg package1:*, reg package2:V, reg p2:p(V +), reg r10:V, reg _code2html_payload_console:cls, reg topic3:*, reg topic4:V, reg p3:p(V +), reg package3:*, reg package4:V, reg p4:p(V +), reg enhancedHTML2:*, reg enhancedHTML3:V, reg p5:p(V +), reg Rhome1:*, reg Rhome2:V, reg p6:p(V +), reg r15:V, reg readLines:cls, reg system_file:cls, reg paste0:cls, reg topic5:*, reg topic6:V, reg p7:p(V +), reg r17:V, reg p8:p(V +), reg package5:*, reg package6:V, reg p9:p(V +), reg r20:V, reg p10:p(V +), reg r22:V, reg _code2html_payload_browser:cls, reg dcode:*, reg dcode1:V, reg p11:p(V +), reg topic7:*, reg topic8:V, reg p12:p(V +), reg package7:*, reg package8:V, reg p13:p(V +), reg Rhome3:*, reg Rhome4:V, reg p14:p(V +), reg env1:*, reg env2:V, reg p15:p(V +), reg r28:V |
    mkenv;
    st topic = topic;
    st package = package;
    Rhome_isMissing = missing.0(Rhome);
    if Rhome_isMissing then L0("") else L0(Rhome);
  L0(Rhome_orDefault):
    st Rhome = Rhome_orDefault;
    env_isMissing = missing.0(env);
    if env_isMissing then L1(NULL) else L1(env);
  L1(env_orDefault):
    st env = env_orDefault;
    config_val_to_logical = ldf config_val_to_logical;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p = prom<V +>{
      Sys_getenv = ldf `Sys.getenv`;
      r = dyn Sys_getenv("_R_HELP_ENABLE_ENHANCED_HTML_", "TRUE");
      return r;
    };
    r2 = dyn config_val_to_logical(p);
    check L5() else D1();
  D1():
    deopt 3 [r2];
  L5():
    st enhancedHTML = r2;
    enhancedHTML = ld enhancedHTML;
    check L6() else D2();
  D2():
    deopt 5 [enhancedHTML];
  L6():
    enhancedHTML1 = force? enhancedHTML;
    checkMissing(enhancedHTML1);
    r3 = `!`(enhancedHTML1);
    c = `as.logical`(r3);
    if c then L2(c) else L7();
  L2(c1):
    c6 = `as.logical`(c1);
    if c6 then L11() else L3();
  L7():
    requireNamespace = ldf requireNamespace;
    check L8() else D3();
  D3():
    deopt 9 [c];
  L3():
    readLines = ldf readLines;
    check L18() else D10();
  L8():
    r4 = dyn requireNamespace[, quietly]("knitr", TRUE);
    check L9() else D4();
  L11():
    __ = ldf `::`;
    check L12() else D5();
  D4():
    deopt 13 [c, r4];
  D5():
    deopt 17 [];
  D10():
    deopt 41 [];
  L9():
    r5 = `!`(r4);
    c3 = `as.logical`(r5);
    c4 = `||`(c, c3);
    goto L2(c4);
  L12():
    r6 = dyn __("utils", "demo");
    check L13() else D6();
  L18():
    p10 = prom<V +>{
      system_file = ldf `system.file`;
      p8 = prom<V +>{
        paste0 = ldf paste0;
        p7 = prom<V +>{
          topic5 = ld topic;
          topic6 = force? topic5;
          checkMissing(topic6);
          return topic6;
        };
        r17 = dyn paste0(p7, ".R");
        return r17;
      };
      p9 = prom<V +>{
        package5 = ld package;
        package6 = force? package5;
        checkMissing(package6);
        return package6;
      };
      r20 = dyn system_file[, , package]("demo", p8, p9);
      return r20;
    };
    r22 = dyn readLines(p10);
    check L19() else D11();
  D6():
    deopt 20 [r6];
  D11():
    deopt 43 [r22];
  L13():
    checkFun.0(r6);
    r7 = r6 as cls;
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
    r10 = dyn r7[, package, `character.only`, ask](p1, p2, TRUE, FALSE);
    check L14() else D7();
  L19():
    st dcode = r22;
    _code2html_payload_browser = ldf `.code2html_payload_browser`;
    check L20() else D12();
  D7():
    deopt 29 [r10];
  D12():
    deopt 46 [];
  L14():
    _code2html_payload_console = ldf `.code2html_payload_console`;
    check L15() else D8();
  L20():
    p11 = prom<V +>{
      dcode = ld dcode;
      dcode1 = force? dcode;
      checkMissing(dcode1);
      return dcode1;
    };
    p12 = prom<V +>{
      topic7 = ld topic;
      topic8 = force? topic7;
      checkMissing(topic8);
      return topic8;
    };
    p13 = prom<V +>{
      package7 = ld package;
      package8 = force? package7;
      checkMissing(package8);
      return package8;
    };
    p14 = prom<V +>{
      Rhome3 = ld Rhome;
      Rhome4 = force? Rhome3;
      checkMissing(Rhome4);
      return Rhome4;
    };
    p15 = prom<V +>{
      env1 = ld env;
      env2 = force? env1;
      checkMissing(env2);
      return env2;
    };
    r28 = dyn _code2html_payload_browser[, , , , Rhome, env]("demo", p11, p12, p13, p14, p15);
    check L21() else D13();
  D8():
    deopt 31 [];
  D13():
    deopt 55 [r28];
  L15():
    p3 = prom<V +>{
      topic3 = ld topic;
      topic4 = force? topic3;
      checkMissing(topic4);
      return topic4;
    };
    p4 = prom<V +>{
      package3 = ld package;
      package4 = force? package3;
      checkMissing(package4);
      return package4;
    };
    p5 = prom<V +>{
      enhancedHTML2 = ld enhancedHTML;
      enhancedHTML3 = force? enhancedHTML2;
      checkMissing(enhancedHTML3);
      return enhancedHTML3;
    };
    p6 = prom<V +>{
      Rhome1 = ld Rhome;
      Rhome2 = force? Rhome1;
      checkMissing(Rhome2);
      return Rhome2;
    };
    r15 = dyn _code2html_payload_console[, , , enhancedHTML, Rhome]("demo", p3, p4, p5, p6);
    check L16() else D9();
  L21():
    popenv;
    return r28;
  D9():
    deopt 39 [r15];
  L16():
    popenv;
    return r15;
  }
}