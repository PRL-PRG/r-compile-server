fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2115699961;
    st get_CITATION_entry_fields = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2115699961(file, encoding) {
  (reg file:*, reg encoding:*) -+> V { var file:*, var encoding:*, reg encoding_isMissing:L, reg encoding_orDefault:*, reg _parse_CITATION_file:cls, reg file1:*, reg file2:V, reg p:p(V +), reg encoding1:*, reg encoding2:V, reg p1:p(V +), reg r2:V, reg r3:cls, reg formals:cls, reg __:cls, reg r4:V, reg p2:p(V +), reg r6:V, reg l:*, reg formals__:cls, reg r7:V, reg formals1:cls, reg __1:cls, reg r8:V, reg p3:p(V +), reg r10:V, reg l1:*, reg formals__1:cls, reg r11:V, reg r12:cls, reg lapply:cls, reg exprs:*, reg exprs1:V, reg p4:p(V +), reg r14:cls, reg p5:p(V +), reg r16:V, reg Filter:cls, reg Negate:cls, reg is_null:*, reg is_null1:V, reg p6:p(V +), reg r18:V, reg p7:p(V +), reg out:*, reg out1:V, reg p8:p(V +), reg r21:V, reg sym:cls, reg base:cls, reg guard:L, reg r22:V, reg r23:V, reg out2:*, reg out3:V, reg length:cls, reg r24:V, reg r25:V, reg c:L, reg sapply:cls, reg out4:*, reg out5:V, reg p9:p(V +), reg __2:*, reg __3:V, reg p10:p(V +), reg r30:V, reg lapply1:cls, reg out6:*, reg out7:V, reg p11:p(V +), reg __4:*, reg __5:V, reg p12:p(V +), reg r33:V, reg data_frame:cls, reg file3:*, reg file4:V, reg p13:p(V +), reg entries:*, reg entries1:V, reg p14:p(V +), reg r36:V, reg fields:*, reg fields1:V, reg l2:*, reg c1:L, reg fields3:V, reg l4:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r37:V, reg out8:*, reg out9:V |
    mkenv;
    st file = file;
    encoding_isMissing = missing.0(encoding);
    if encoding_isMissing then L0("ASCII") else L0(encoding);
  L0(encoding_orDefault):
    st encoding = encoding_orDefault;
    _parse_CITATION_file = ldf `.parse_CITATION_file`;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p = prom<V +>{
      file1 = ld file;
      file2 = force? file1;
      checkMissing(file2);
      return file2;
    };
    p1 = prom<V +>{
      encoding1 = ld encoding;
      encoding2 = force? encoding1;
      checkMissing(encoding2);
      return encoding2;
    };
    r2 = dyn _parse_CITATION_file(p, p1);
    check L5() else D1();
  D1():
    deopt 4 [r2];
  L5():
    st exprs = r2;
    r3 = clos inner2708337952;
    st FOO2 = r3;
    st FOO1 = r3;
    formals = ldf formals;
    check L6() else D2();
  D2():
    deopt 11 [];
  L6():
    p2 = prom<V +>{
      __ = ldf `::`;
      r4 = dyn __("utils", "citEntry");
      return r4;
    };
    r6 = dyn formals(p2);
    check L7() else D3();
  D3():
    deopt 13 [r6];
  L7():
    l = ld FOO1;
    formals__ = ldf `formals<-`;
    check L8() else D4();
  D4():
    deopt 15 [r6, l, r6];
  L8():
    r7 = dyn formals__(l, NULL, r6);
    check L9() else D5();
  D5():
    deopt 17 [r6, r7];
  L9():
    st FOO1 = r7;
    formals1 = ldf formals;
    check L10() else D6();
  D6():
    deopt 20 [];
  L10():
    p3 = prom<V +>{
      __1 = ldf `::`;
      r8 = dyn __1("utils", "bibentry");
      return r8;
    };
    r10 = dyn formals1(p3);
    check L11() else D7();
  D7():
    deopt 22 [r10];
  L11():
    l1 = ld FOO2;
    formals__1 = ldf `formals<-`;
    check L12() else D8();
  D8():
    deopt 24 [r10, l1, r10];
  L12():
    r11 = dyn formals__1(l1, NULL, r10);
    check L13() else D9();
  D9():
    deopt 26 [r10, r11];
  L13():
    st FOO2 = r11;
    r12 = clos inner2501545716;
    st get_names_of_nonempty_fields = r12;
    lapply = ldf lapply;
    check L14() else D10();
  D10():
    deopt 32 [];
  L14():
    p4 = prom<V +>{
      exprs = ld exprs;
      exprs1 = force? exprs;
      checkMissing(exprs1);
      return exprs1;
    };
    p5 = prom<V +>{
      r14 = clos inner3708401697;
      return r14;
    };
    r16 = dyn lapply(p4, p5);
    check L15() else D11();
  D11():
    deopt 35 [r16];
  L15():
    st out = r16;
    Filter = ldf Filter;
    check L16() else D12();
  D12():
    deopt 38 [];
  L16():
    p7 = prom<V +>{
      Negate = ldf Negate;
      p6 = prom<V +>{
        is_null = ld `is.null`;
        is_null1 = force? is_null;
        checkMissing(is_null1);
        return is_null1;
      };
      r18 = dyn Negate(p6);
      return r18;
    };
    p8 = prom<V +>{
      out = ld out;
      out1 = force? out;
      checkMissing(out1);
      return out1;
    };
    r21 = dyn Filter(p7, p8);
    check L17() else D13();
  D13():
    deopt 41 [r21];
  L17():
    st out = r21;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L18() else L19();
  L1(r23):
    r25 = `!`(r23);
    c = `as.logical`(r25);
    if c then L22() else L2();
  L18():
    out2 = ld out;
    check L20() else D14();
  L19():
    r22 = dyn base(<sym out>);
    goto L1(r22);
  D14():
    deopt 45 [out2];
  L2():
    sapply = ldf sapply;
    check L25() else D16();
  L20():
    out3 = force? out2;
    checkMissing(out3);
    length = ldf length in base;
    r24 = dyn length(out3);
    check L21() else D15();
  L22():
    popenv;
    return NULL;
  D15():
    deopt 48 [r24];
  D16():
    deopt 56 [];
  L21():
    goto L1(r24);
  L25():
    p9 = prom<V +>{
      out4 = ld out;
      out5 = force? out4;
      checkMissing(out5);
      return out5;
    };
    p10 = prom<V +>{
      __2 = ld `[[`;
      __3 = force? __2;
      checkMissing(__3);
      return __3;
    };
    r30 = dyn sapply(p9, p10, 1);
    check L26() else D17();
  D17():
    deopt 60 [r30];
  L26():
    st entries = r30;
    lapply1 = ldf lapply;
    check L27() else D18();
  D18():
    deopt 63 [];
  L27():
    p11 = prom<V +>{
      out6 = ld out;
      out7 = force? out6;
      checkMissing(out7);
      return out7;
    };
    p12 = prom<V +>{
      __4 = ld `[[`;
      __5 = force? __4;
      checkMissing(__5);
      return __5;
    };
    r33 = dyn lapply1(p11, p12, 2);
    check L28() else D19();
  D19():
    deopt 67 [r33];
  L28():
    st fields = r33;
    data_frame = ldf `data.frame`;
    check L29() else D20();
  D20():
    deopt 70 [];
  L29():
    p13 = prom<V +>{
      file3 = ld file;
      file4 = force? file3;
      checkMissing(file4);
      return file4;
    };
    p14 = prom<V +>{
      entries = ld entries;
      entries1 = force? entries;
      checkMissing(entries1);
      return entries1;
    };
    r36 = dyn data_frame[File, Entry, stringsAsFactors](p13, p14, FALSE);
    check L30() else D21();
  D21():
    deopt 77 [r36];
  L30():
    st out = r36;
    fields = ld fields;
    check L31() else D22();
  D22():
    deopt 79 [fields];
  L31():
    fields1 = force? fields;
    checkMissing(fields1);
    l2 = ld out;
    c1 = `is.object`(l2);
    if c1 then L33() else L34(fields1, l2);
  L32(dx1):
    st out = dx1;
    out8 = ld out;
    check L36() else D23();
  L33():
    dr = tryDispatchBuiltin.0("$<-", l2, fields1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L35() else L34(fields1, dr);
  L34(fields3, l4):
    r37 = `$<-`(l4, <sym Fields>, fields1);
    goto L32(r37);
  D23():
    deopt 84 [out8];
  L35():
    dx = getTryDispatchBuiltinValue(dr);
    goto L32(dx);
  L36():
    out9 = force? out8;
    checkMissing(out9);
    popenv;
    return out9;
  }
}
fun inner2708337952() {
  () -+> V { reg match_call:cls, reg r:V |
    mkenv;
    match_call = ldf `match.call`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    r = dyn match_call[`expand.dots`](FALSE);
    check L1() else D1();
  D1():
    deopt 4 [r];
  L1():
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg names:cls, reg r2:V, reg c:L, reg r4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg vapply:cls, reg x3:*, reg x4:V, reg p:p(V +), reg r6:cls, reg p1:p(V +), reg r8:V, reg __:cls, reg r9:V |
    mkenv;
    st x = x;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    c = `is.object`(r1);
    if c then L6() else L7(r1);
  L2():
    x1 = ld x;
    check L4() else D0();
  L3():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1(dx1):
    popenv;
    return dx1;
  L4():
    x2 = force? x1;
    checkMissing(x2);
    names = ldf names in base;
    r2 = dyn names(x2);
    check L5() else D1();
  L6():
    dr = tryDispatchBuiltin.1("[", r1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L8() else L7(dr);
  L7(r4):
    vapply = ldf vapply;
    check L9() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [r4];
  L5():
    goto L0(r2);
  L8():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L9():
    p = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p1 = prom<V +>{
      r6 = clos inner3708401697;
      return r6;
    };
    r8 = dyn vapply(p, p1, NA_LGL);
    check L10() else D3();
  D3():
    deopt 11 [r4, r8];
  L10():
    __ = ldf `[` in base;
    r9 = dyn __(r4, r8);
    goto L1(r9);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg e1:*, reg e2:V, reg length:cls, reg r2:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg c5:L, reg r4:V, reg e3:*, reg e4:V, reg c6:L, reg c7:L, reg c10:L, reg c11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg c16:L, reg c17:L, reg r6:V, reg grepl:cls, reg e5:*, reg e6:V, reg p:p(V +), reg r8:V, reg all:cls, reg r9:V, reg c18:L, reg c19:V, reg r10:V, reg c22:L, reg c23:V |
    mkenv;
    st e = e;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    c = `as.logical`(r1);
    if c then L9() else L1(c);
  L5():
    e1 = ld e;
    check L7() else D0();
  L6():
    r = dyn base(<sym e>);
    goto L0(r);
  D0():
    deopt 2 [e1];
  L1(c2):
    popenv;
    return c2;
  L7():
    e2 = force? e1;
    checkMissing(e2);
    length = ldf length in base;
    r2 = dyn length(e2);
    check L8() else D1();
  L9():
    sym1 = ldf `is.character`;
    base1 = ldf `is.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  D1():
    deopt 5 [r2];
  L2(c5, r4):
    c7 = `as.logical`(r4);
    if c7 then L13() else L3(c5, c7);
  L8():
    goto L0(r2);
  L10():
    e3 = ld e;
    check L12() else D2();
  L11():
    r3 = dyn base1(<sym e>);
    goto L2(c, r3);
  D2():
    deopt 7 [c, e3];
  L3(c10, c11):
    r10 = `!`(c11);
    c22 = `as.logical`(r10);
    c23 = `&&`(c10, c22);
    goto L1(c23);
  L12():
    e4 = force? e3;
    checkMissing(e4);
    c6 = `is.character`(e4);
    goto L2(c, c6);
  L13():
    sym2 = ldf all;
    base2 = ldf all in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L14() else L15();
  L4(c16, c17, r6):
    c18 = `as.logical`(r6);
    c19 = `&&`(c17, c18);
    goto L3(c16, c19);
  L14():
    grepl = ldf grepl;
    check L16() else D3();
  L15():
    r5 = dyn base2(<lang grepl("^[[:space:]]*$", e)>);
    goto L4(c5, c7, r5);
  D3():
    deopt 13 [c5, c7];
  L16():
    p = prom<V +>{
      e5 = ld e;
      e6 = force? e5;
      checkMissing(e6);
      return e6;
    };
    r8 = dyn grepl("^[[:space:]]*$", p);
    check L17() else D4();
  D4():
    deopt 16 [c5, c7, r8];
  L17():
    all = ldf all in base;
    r9 = dyn all(r8);
    check L18() else D5();
  D5():
    deopt 18 [c5, c7, r9];
  L18():
    goto L4(c5, c7, r9);
  }
}