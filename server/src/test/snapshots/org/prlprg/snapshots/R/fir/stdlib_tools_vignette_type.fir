fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner270641308;
    st vignette_type = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner270641308(file) {
  (reg file:*) -+> V { var file:*, reg tolower:cls, reg file_ext:cls, reg file1:*, reg file2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg c:cls, reg r6:V, reg c1:L, reg r8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ext:*, reg ext1:V, reg __:cls, reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg type:*, reg type1:V, reg is_na:cls, reg r12:V, reg c2:L, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg file3:*, reg file4:V, reg p2:p(V +), reg r14:V, reg p3:p(V +), reg paste:cls, reg sQuote1:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg type2:*, reg type3:V, reg names:cls, reg r18:V, reg p4:p(V +), reg r20:V, reg p5:p(V +), reg r22:V, reg p6:p(V +), reg r24:V, reg p7:p(V +), reg r26:V, reg unname:cls, reg type4:*, reg type5:V, reg p8:p(V +), reg r29:V |
    mkenv;
    st file = file;
    tolower = ldf tolower;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p1 = prom<V +>{
      file_ext = ldf file_ext;
      p = prom<V +>{
        file1 = ld file;
        file2 = force? file1;
        checkMissing(file2);
        return file2;
      };
      r1 = dyn file_ext(p);
      return r1;
    };
    r3 = dyn tolower(p1);
    check L6() else D1();
  D1():
    deopt 3 [r3];
  L6():
    st ext = r3;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r5):
    c1 = `is.object`(r5);
    if c1 then L10() else L11(r5);
  L7():
    c = ldf c in base;
    r6 = dyn c("PDF", "HTML");
    check L9() else D2();
  L8():
    r4 = dyn base[pdf, html]("PDF", "HTML");
    goto L0(r4);
  D2():
    deopt 12 [r6];
  L1(dx1):
    st type = dx1;
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  L9():
    goto L0(r6);
  L10():
    dr = tryDispatchBuiltin.1("[", r5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(r8):
    ext = ld ext;
    check L13() else D3();
  D3():
    deopt 13 [r8, ext];
  L2(r11):
    c2 = `as.logical`(r11);
    if c2 then L18() else L3();
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L13():
    ext1 = force? ext;
    __ = ldf `[` in base;
    r9 = dyn __(r8, ext1);
    goto L1(r9);
  L14():
    type = ld type;
    check L16() else D4();
  L15():
    r10 = dyn base1(<sym type>);
    goto L2(r10);
  D4():
    deopt 19 [type];
  L3():
    goto L4();
  L4():
    unname = ldf unname;
    check L22() else D8();
  L16():
    type1 = force? type;
    checkMissing(type1);
    is_na = ldf `is.na` in base;
    r12 = dyn is_na(type1);
    check L17() else D5();
  L18():
    stop = ldf stop;
    check L19() else D6();
  D5():
    deopt 22 [r12];
  D6():
    deopt 24 [];
  D8():
    deopt 32 [];
  L17():
    goto L2(r12);
  L19():
    p7 = prom<V +>{
      gettextf = ldf gettextf;
      p3 = prom<V +>{
        sQuote = ldf sQuote;
        p2 = prom<V +>{
          file3 = ld file;
          file4 = force? file3;
          checkMissing(file4);
          return file4;
        };
        r14 = dyn sQuote(p2);
        return r14;
      };
      p6 = prom<V +>{
        paste = ldf paste;
        p5 = prom<V +>{
          sQuote1 = ldf sQuote;
          p4 = prom<V +>{
            sym2 = ldf names;
            base2 = ldf names in base;
            guard2 = `==`.4(sym2, base2);
            if guard2 then L1() else L2();
          L0(r17):
            return r17;
          L1():
            type2 = ld type;
            type3 = force? type2;
            checkMissing(type3);
            names = ldf names in base;
            r18 = dyn names(type3);
            goto L0(r18);
          L2():
            r16 = dyn base2(<sym type>);
            goto L0(r16);
          };
          r20 = dyn sQuote1(p4);
          return r20;
        };
        r22 = dyn paste[, collapse](p5, ", ");
        return r22;
      };
      r24 = dyn gettextf("Vignette product %s does not have a known filename extension (%s)", p3, p6);
      return r24;
    };
    r26 = dyn stop[, domain](p7, NA_LGL);
    check L20() else D7();
  L22():
    p8 = prom<V +>{
      type4 = ld type;
      type5 = force? type4;
      checkMissing(type5);
      return type5;
    };
    r29 = dyn unname(p8);
    check L23() else D9();
  D7():
    deopt 28 [r26];
  D9():
    deopt 34 [r29];
  L20():
    goto L4();
  L23():
    popenv;
    return r29;
  }
}