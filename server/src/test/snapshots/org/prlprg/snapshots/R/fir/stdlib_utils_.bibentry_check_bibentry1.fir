fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner75171589;
    st `.bibentry_check_bibentry1` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner75171589(x, force) {
  (reg x:*, reg force:*) -+> V { var x:*, var force:*, reg force_isMissing:L, reg force_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg names:cls, reg r2:V, reg force1:*, reg force2:V, reg r3:V, reg c:L, reg c2:V, reg _is_not_nonempty_text:cls, reg x3:*, reg x4:V, reg c3:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r4:V, reg p:p(V +), reg r6:V, reg r7:V, reg c4:L, reg c5:V, reg c7:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg x7:*, reg x8:V, reg attr:cls, reg r12:V, reg strsplit:cls, reg ___:cls, reg r13:V, reg c8:L, reg r15:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg bibtype:*, reg bibtype1:V, reg __:cls, reg r16:V, reg p1:p(V +), reg r18:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg r20:V, reg rfields:*, reg rfields1:V, reg length:cls, reg r21:V, reg r22:V, reg c9:L, reg vapply:cls, reg rfields2:*, reg rfields3:V, reg p2:p(V +), reg r24:cls, reg p3:p(V +), reg r26:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r27:V, reg r28:V, reg ok:*, reg ok1:V, reg r29:V, reg any:cls, reg r30:V, reg c10:L, reg stop:cls, reg sprintf:cls, reg ngettext:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r31:V, reg r32:V, reg ok2:*, reg ok3:V, reg r33:V, reg sum:cls, reg r34:V, reg p4:p(V +), reg r36:V, reg p5:p(V +), reg sQuote:cls, reg bibtype2:*, reg bibtype3:V, reg p6:p(V +), reg r39:V, reg p7:p(V +), reg paste:cls, reg rfields4:*, reg rfields5:V, reg c11:L, reg rfields7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ok4:*, reg ok5:V, reg r41:V, reg __1:cls, reg r42:V, reg p8:p(V +), reg r44:V, reg p9:p(V +), reg r46:V, reg p10:p(V +), reg r48:V |
    mkenv;
    st x = x;
    force_isMissing = missing.0(force);
    if force_isMissing then L0(FALSE) else L0(force);
  L0(force_orDefault):
    st force = force_orDefault;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L1(r1):
    st fields = r1;
    force1 = ld force;
    check L14() else D2();
  L10():
    x1 = ld x;
    check L12() else D0();
  L11():
    r = dyn base(<sym x>);
    goto L1(r);
  D0():
    deopt 2 [x1];
  D2():
    deopt 7 [force1];
  L12():
    x2 = force? x1;
    checkMissing(x2);
    names = ldf names in base;
    r2 = dyn names(x2);
    check L13() else D1();
  L14():
    force2 = force? force1;
    checkMissing(force2);
    r3 = `!`(force2);
    c = `as.logical`(r3);
    if c then L15() else L2(c);
  D1():
    deopt 5 [r2];
  L2(c2):
    c7 = `as.logical`(c2);
    if c7 then L19() else L3();
  L13():
    goto L1(r2);
  L15():
    _is_not_nonempty_text = ldf `.is_not_nonempty_text`;
    check L16() else D3();
  D3():
    deopt 11 [c];
  L3():
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L22() else L23();
  L16():
    p = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      c3 = `is.object`(x4);
      if c3 then L1() else L2(x4);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", x4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x6):
      r4 = `$`(x6, <sym crossref>);
      goto L0(r4);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r6 = dyn _is_not_nonempty_text(p);
    check L17() else D4();
  L19():
    popenv;
    return NULL;
  D4():
    deopt 13 [c, r6];
  L5(r11):
    st bibtype = r11;
    strsplit = ldf strsplit;
    check L26() else D7();
  L17():
    r7 = `!`(r6);
    c4 = `as.logical`(r7);
    c5 = `&&`(c, c4);
    goto L2(c5);
  L22():
    x7 = ld x;
    check L24() else D5();
  L23():
    r10 = dyn base1(<sym x>, "bibtype");
    goto L5(r10);
  D5():
    deopt 23 [x7];
  D7():
    deopt 30 [];
  L24():
    x8 = force? x7;
    checkMissing(x8);
    attr = ldf attr in base;
    r12 = dyn attr(x8, "bibtype");
    check L25() else D6();
  L26():
    p1 = prom<V +>{
      ___ = ldf `:::`;
      r13 = dyn ___("tools", "BibTeX_entry_field_db");
      c8 = `is.object`(r13);
      if c8 then L1() else L2(r13);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[[", r13);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(r15):
      bibtype = ld bibtype;
      bibtype1 = force? bibtype;
      __ = ldf `[[` in base;
      r16 = dyn __(r15, bibtype1);
      goto L0(r16);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r18 = dyn strsplit[, , fixed](p1, "|", TRUE);
    check L27() else D8();
  D6():
    deopt 27 [r12];
  D8():
    deopt 35 [r18];
  L25():
    goto L5(r12);
  L27():
    st rfields = r18;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L28() else L29();
  L6(r20):
    r22 = `>`(r20, 0);
    c9 = `as.logical`(r22);
    if c9 then L32() else L7();
  L28():
    rfields = ld rfields;
    check L30() else D9();
  L29():
    r19 = dyn base2(<sym rfields>);
    goto L6(r19);
  D9():
    deopt 39 [rfields];
  L7():
    invisible.0();
    popenv;
    return NULL;
  L30():
    rfields1 = force? rfields;
    checkMissing(rfields1);
    length = ldf length in base;
    r21 = dyn length(rfields1);
    check L31() else D10();
  L32():
    vapply = ldf vapply;
    check L33() else D11();
  D10():
    deopt 42 [r21];
  D11():
    deopt 46 [];
  L31():
    goto L6(r21);
  L33():
    p2 = prom<V +>{
      rfields2 = ld rfields;
      rfields3 = force? rfields2;
      checkMissing(rfields3);
      return rfields3;
    };
    p3 = prom<V +>{
      r24 = clos inner1384373858;
      return r24;
    };
    r26 = dyn vapply(p2, p3, NA_LGL);
    check L34() else D12();
  D12():
    deopt 50 [r26];
  L34():
    st ok = r26;
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L35() else L36();
  L8(r28):
    c10 = `as.logical`(r28);
    if c10 then L39() else L9();
  L35():
    ok = ld ok;
    check L37() else D13();
  L36():
    r27 = dyn base3(<lang `!`(ok)>);
    goto L8(r27);
  D13():
    deopt 54 [ok];
  L9():
    invisible.0();
    popenv;
    return NULL;
  L37():
    ok1 = force? ok;
    checkMissing(ok1);
    r29 = `!`(ok1);
    any = ldf any in base;
    r30 = dyn any(r29);
    check L38() else D14();
  L39():
    stop = ldf stop;
    check L40() else D15();
  D14():
    deopt 58 [r30];
  D15():
    deopt 60 [];
  L38():
    goto L8(r30);
  L40():
    p10 = prom<V +>{
      sprintf = ldf sprintf;
      p5 = prom<V +>{
        ngettext = ldf ngettext;
        p4 = prom<V +>{
          sym4 = ldf sum;
          base4 = ldf sum in base;
          guard4 = `==`.4(sym4, base4);
          if guard4 then L1() else L2();
        L0(r32):
          return r32;
        L1():
          ok2 = ld ok;
          ok3 = force? ok2;
          checkMissing(ok3);
          r33 = `!`(ok3);
          sum = ldf sum in base;
          r34 = dyn sum(r33);
          goto L0(r34);
        L2():
          r31 = dyn base4(<lang `!`(ok)>);
          goto L0(r31);
        };
        r36 = dyn ngettext(p4, "A bibentry of bibtype %s has to specify the field: %s", "A bibentry of bibtype %s has to specify the fields: %s");
        return r36;
      };
      p7 = prom<V +>{
        sQuote = ldf sQuote;
        p6 = prom<V +>{
          bibtype2 = ld bibtype;
          bibtype3 = force? bibtype2;
          checkMissing(bibtype3);
          return bibtype3;
        };
        r39 = dyn sQuote(p6);
        return r39;
      };
      p9 = prom<V +>{
        paste = ldf paste;
        p8 = prom<V +>{
          rfields4 = ld rfields;
          rfields5 = force? rfields4;
          checkMissing(rfields5);
          c11 = `is.object`(rfields5);
          if c11 then L1() else L2(rfields5);
        L0(dx5):
          return dx5;
        L1():
          dr4 = tryDispatchBuiltin.1("[", rfields5);
          dc2 = getTryDispatchBuiltinDispatched(dr4);
          if dc2 then L3() else L2(dr4);
        L2(rfields7):
          ok4 = ld ok;
          ok5 = force? ok4;
          checkMissing(ok5);
          r41 = `!`(ok5);
          __1 = ldf `[` in base;
          r42 = dyn __1(rfields7, r41);
          goto L0(r42);
        L3():
          dx4 = getTryDispatchBuiltinValue(dr4);
          goto L0(dx4);
        };
        r44 = dyn paste[, collapse](p8, ", ");
        return r44;
      };
      r46 = dyn sprintf(p5, p7, p9);
      return r46;
    };
    r48 = dyn stop[, domain](p10, NA_LGL);
    check L41() else D16();
  D16():
    deopt 64 [r48];
  L41():
    popenv;
    return r48;
  }
}
fun inner1384373858(f) {
  (reg f:*) -+> V { var f:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg _in_:cls, reg f1:*, reg f2:V, reg p:p(V +), reg fields:*, reg fields1:V, reg p1:p(V +), reg r4:V, reg any:cls, reg r5:V |
    mkenv;
    st f = f;
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    _in_ = ldf `%in%`;
    check L3() else D0();
  L2():
    r = dyn base(<lang `%in%`(f, fields)>);
    goto L0(r);
  D0():
    deopt 3 [];
  L3():
    p = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    p1 = prom<V +>{
      fields = ld fields;
      fields1 = force? fields;
      checkMissing(fields1);
      return fields1;
    };
    r4 = dyn _in_(p, p1);
    check L4() else D1();
  D1():
    deopt 6 [r4];
  L4():
    any = ldf any in base;
    r5 = dyn any(r4);
    check L5() else D2();
  D2():
    deopt 8 [r5];
  L5():
    goto L0(r5);
  }
}