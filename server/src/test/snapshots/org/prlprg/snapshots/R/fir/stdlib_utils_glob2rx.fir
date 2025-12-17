fun main() {
  () -+> V { reg r:cls, reg stopifnot:cls, reg glob2rx:cls, reg r1:V, reg r2:V, reg p:p(V +), reg glob2rx1:cls, reg r4:V, reg r5:V, reg p1:p(V +), reg glob2rx2:cls, reg r7:V, reg r8:V, reg p2:p(V +), reg glob2rx3:cls, reg r10:V, reg r11:V, reg p3:p(V +), reg glob2rx4:cls, reg r13:V, reg r14:V, reg p4:p(V +), reg glob2rx5:cls, reg r16:V, reg r17:V, reg p5:p(V +), reg glob2rx6:cls, reg r19:V, reg r20:V, reg p6:p(V +), reg glob2rx7:cls, reg r22:V, reg r23:V, reg p7:p(V +), reg r25:V |
    mkenv;
    r = clos inner964105873;
    st glob2rx = r;
    stopifnot = ldf stopifnot;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      glob2rx = ldf glob2rx;
      r1 = dyn glob2rx("abc.*");
      r2 = `==`(r1, "^abc\\.");
      return r2;
    };
    p1 = prom<V +>{
      glob2rx1 = ldf glob2rx;
      r4 = dyn glob2rx1("a?b.*");
      r5 = `==`(r4, "^a.b\\.");
      return r5;
    };
    p2 = prom<V +>{
      glob2rx2 = ldf glob2rx;
      r7 = dyn glob2rx2[, `trim.tail`]("a?b.*", FALSE);
      r8 = `==`(r7, "^a.b\\..*$");
      return r8;
    };
    p3 = prom<V +>{
      glob2rx3 = ldf glob2rx;
      r10 = dyn glob2rx3("*.doc");
      r11 = `==`(r10, "^.*\\.doc$");
      return r11;
    };
    p4 = prom<V +>{
      glob2rx4 = ldf glob2rx;
      r13 = dyn glob2rx4[, `trim.head`]("*.doc", TRUE);
      r14 = `==`(r13, "\\.doc$");
      return r14;
    };
    p5 = prom<V +>{
      glob2rx5 = ldf glob2rx;
      r16 = dyn glob2rx5("*.t*");
      r17 = `==`(r16, "^.*\\.t");
      return r17;
    };
    p6 = prom<V +>{
      glob2rx6 = ldf glob2rx;
      r19 = dyn glob2rx6("*.t??");
      r20 = `==`(r19, "^.*\\.t..$");
      return r20;
    };
    p7 = prom<V +>{
      glob2rx7 = ldf glob2rx;
      r22 = dyn glob2rx7("*[*");
      r23 = `==`(r22, "^.*\\[");
      return r23;
    };
    r25 = dyn stopifnot(p, p1, p2, p3, p4, p5, p6, p7);
    check L1() else D1();
  D1():
    deopt 13 [r25];
  L1():
    popenv;
    return r25;
  }
}
fun inner964105873(pattern, `trim.head`, `trim.tail`) {
  (reg pattern:*, reg trim_head:*, reg trim_tail:*) -+> V { var pattern:*, var `trim.head`:*, reg trim_head_isMissing:L, reg trim_head_orDefault:*, var `trim.tail`:*, reg trim_tail_isMissing:L, reg trim_tail_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg pattern1:*, reg pattern2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg character:cls, reg r4:V, reg gsub:cls, reg paste0:cls, reg pattern3:*, reg pattern4:V, reg p:p(V +), reg r8:V, reg p1:p(V +), reg r10:V, reg gsub1:cls, reg gsub2:cls, reg p2:*, reg p3:V, reg p4:p(V +), reg r12:V, reg p5:p(V +), reg r14:V, reg gsub3:cls, reg p6:*, reg p7:V, reg p8:p(V +), reg r16:V, reg gsub4:cls, reg p9:*, reg p10:V, reg p11:p(V +), reg r18:V, reg gsub5:cls, reg p12:*, reg p13:V, reg p14:p(V +), reg r20:V, reg trim_tail1:*, reg trim_tail2:V, reg c1:L, reg sub:cls, reg p15:*, reg p16:V, reg p17:p(V +), reg r22:V, reg trim_head1:*, reg trim_head2:V, reg c2:L, reg sub1:cls, reg p18:*, reg p19:V, reg p20:p(V +), reg r25:V, reg p21:*, reg p22:V |
    mkenv;
    st pattern = pattern;
    trim_head_isMissing = missing.0(trim_head);
    if trim_head_isMissing then L0(FALSE) else L0(trim_head);
  L0(trim_head_orDefault):
    st `trim.head` = trim_head_orDefault;
    trim_tail_isMissing = missing.0(trim_tail);
    if trim_tail_isMissing then L1(TRUE) else L1(trim_tail);
  L1(trim_tail_orDefault):
    st `trim.tail` = trim_tail_orDefault;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L2(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L13() else L3();
  L9():
    pattern1 = ld pattern;
    check L11() else D0();
  L10():
    r = dyn base(<sym pattern>);
    goto L2(r);
  D0():
    deopt 2 [pattern1];
  L3():
    gsub = ldf gsub;
    check L18() else D4();
  L11():
    pattern2 = force? pattern1;
    checkMissing(pattern2);
    length = ldf length in base;
    r2 = dyn length(pattern2);
    check L12() else D1();
  L13():
    character = ldf character;
    check L14() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 8 [];
  D4():
    deopt 14 [];
  L12():
    goto L2(r2);
  L14():
    r4 = dyn character();
    check L15() else D3();
  L18():
    p1 = prom<V +>{
      paste0 = ldf paste0;
      p = prom<V +>{
        pattern3 = ld pattern;
        pattern4 = force? pattern3;
        checkMissing(pattern4);
        return pattern4;
      };
      r8 = dyn paste0("^", p, "$");
      return r8;
    };
    r10 = dyn gsub[, , , fixed](".", "\\.", p1, TRUE);
    check L19() else D5();
  D3():
    deopt 9 [r4];
  D5():
    deopt 20 [r10];
  L15():
    popenv;
    return r4;
  L19():
    st p = r10;
    gsub1 = ldf gsub;
    check L20() else D6();
  D6():
    deopt 23 [];
  L20():
    p5 = prom<V +>{
      gsub2 = ldf gsub;
      p4 = prom<V +>{
        p2 = ld p;
        p3 = force? p2;
        checkMissing(p3);
        return p3;
      };
      r12 = dyn gsub2[, , , fixed]("*", ".*", p4, TRUE);
      return r12;
    };
    r14 = dyn gsub1[, , , fixed]("?", ".", p5, TRUE);
    check L21() else D7();
  D7():
    deopt 29 [r14];
  L21():
    st p = r14;
    gsub3 = ldf gsub;
    check L22() else D8();
  D8():
    deopt 32 [];
  L22():
    p8 = prom<V +>{
      p6 = ld p;
      p7 = force? p6;
      checkMissing(p7);
      return p7;
    };
    r16 = dyn gsub3("([^\\])\\(", "\\1\\\\(", p8);
    check L23() else D9();
  D9():
    deopt 36 [r16];
  L23():
    st p = r16;
    gsub4 = ldf gsub;
    check L24() else D10();
  D10():
    deopt 39 [];
  L24():
    p11 = prom<V +>{
      p9 = ld p;
      p10 = force? p9;
      checkMissing(p10);
      return p10;
    };
    r18 = dyn gsub4("([^\\])\\[", "\\1\\\\[", p11);
    check L25() else D11();
  D11():
    deopt 43 [r18];
  L25():
    st p = r18;
    gsub5 = ldf gsub;
    check L26() else D12();
  D12():
    deopt 46 [];
  L26():
    p14 = prom<V +>{
      p12 = ld p;
      p13 = force? p12;
      checkMissing(p13);
      return p13;
    };
    r20 = dyn gsub5("([^\\])\\{", "\\1\\\\{", p14);
    check L27() else D13();
  D13():
    deopt 50 [r20];
  L27():
    st p = r20;
    trim_tail1 = ld `trim.tail`;
    check L28() else D14();
  D14():
    deopt 52 [trim_tail1];
  L28():
    trim_tail2 = force? trim_tail1;
    checkMissing(trim_tail2);
    c1 = `as.logical`(trim_tail2);
    if c1 then L29() else L5();
  L5():
    goto L6();
  L6():
    trim_head1 = ld `trim.head`;
    check L33() else D17();
  L29():
    sub = ldf sub;
    check L30() else D15();
  D15():
    deopt 55 [];
  D17():
    deopt 65 [trim_head1];
  L30():
    p17 = prom<V +>{
      p15 = ld p;
      p16 = force? p15;
      checkMissing(p16);
      return p16;
    };
    r22 = dyn sub[, , , fixed](".*$", "", p17, TRUE);
    check L31() else D16();
  L33():
    trim_head2 = force? trim_head1;
    checkMissing(trim_head2);
    c2 = `as.logical`(trim_head2);
    if c2 then L34() else L7();
  D16():
    deopt 61 [r22];
  L7():
    goto L8();
  L8():
    p21 = ld p;
    check L38() else D20();
  L31():
    st p = r22;
    goto L6();
  L34():
    sub1 = ldf sub;
    check L35() else D18();
  D18():
    deopt 68 [];
  D20():
    deopt 78 [p21];
  L35():
    p20 = prom<V +>{
      p18 = ld p;
      p19 = force? p18;
      checkMissing(p19);
      return p19;
    };
    r25 = dyn sub1[, , , fixed]("^.*", "", p20, TRUE);
    check L36() else D19();
  L38():
    p22 = force? p21;
    checkMissing(p22);
    popenv;
    return p22;
  D19():
    deopt 74 [r25];
  L36():
    st p = r25;
    goto L8();
  }
}