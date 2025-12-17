fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1384373858;
    st read_symbols_from_object_file = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1384373858(f) {
  (reg f:*) -+> V { var f:*, reg Sys_getenv:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg nm:*, reg nm1:V, reg nzchar:cls, reg r3:V, reg r4:V, reg c:L, reg Sys_which:cls, reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg nm2:*, reg nm3:V, reg nzchar1:cls, reg r8:V, reg c1:L, reg shQuote:cls, reg nm4:*, reg nm5:V, reg p:p(V +), reg r10:V, reg r11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg nm6:*, reg nm7:V, reg nzchar2:cls, reg r15:V, reg r16:V, reg c2:L, reg warning:cls, reg r17:V, reg file_path_as_absolute:cls, reg f1:*, reg f2:V, reg p1:p(V +), reg r21:V, reg file_size:cls, reg f3:*, reg f4:V, reg p2:p(V +), reg r23:V, reg r24:V, reg c3:L, reg strsplit:cls, reg system:cls, reg sprintf:cls, reg nm8:*, reg nm9:V, reg p3:p(V +), reg shQuote1:cls, reg f5:*, reg f6:V, reg p4:p(V +), reg r29:V, reg p5:p(V +), reg r31:V, reg p6:p(V +), reg r33:V, reg p7:p(V +), reg r35:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r36:V, reg r37:V, reg s:*, reg s1:V, reg length:cls, reg r38:V, reg matrix:cls, reg n:*, reg n1:V, reg p8:p(V +), reg r40:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r41:V, reg r42:V, reg c4:cls, reg r43:V, reg l:*, reg colnames__:cls, reg r44:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r45:V, reg r46:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r47:V, reg r48:V, reg n2:*, reg n3:V, reg r49:I, reg lengths:cls, reg s2:*, reg s3:V, reg p9:p(V +), reg r51:V, reg rep_int:cls, reg r52:V, reg unlist:cls, reg lapply:cls, reg s4:*, reg s5:V, reg p10:p(V +), reg seq_along:*, reg seq_along1:V, reg p11:p(V +), reg r55:V, reg p12:p(V +), reg r57:V, reg unlist1:cls, reg s6:*, reg s7:V, reg p13:p(V +), reg r59:V, reg l1:*, reg c5:L, reg r61:V, reg l3:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg n4:*, reg n5:V, reg j:*, reg j1:V, reg r64:V, reg r65:V, reg i:*, reg i1:V, reg r66:V, reg ___:cls, reg r67:V, reg tab:*, reg tab1:V |
    mkenv;
    st f = f;
    Sys_getenv = ldf `Sys.getenv`;
    check L16() else D0();
  D0():
    deopt 1 [];
  L16():
    r = dyn Sys_getenv("UserNM");
    check L17() else D1();
  D1():
    deopt 3 [r];
  L17():
    st nm = r;
    sym = ldf nzchar;
    base = ldf nzchar in base;
    guard = `==`.4(sym, base);
    if guard then L18() else L19();
  L0(r2):
    r4 = `!`(r2);
    c = `as.logical`(r4);
    if c then L22() else L1();
  L18():
    nm = ld nm;
    check L20() else D2();
  L19():
    r1 = dyn base(<sym nm>);
    goto L0(r1);
  D2():
    deopt 7 [nm];
  L1():
    goto L5();
  L5():
    sym2 = ldf nzchar;
    base2 = ldf nzchar in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L34() else L35();
  L20():
    nm1 = force? nm;
    checkMissing(nm1);
    nzchar = ldf nzchar in base;
    r3 = dyn nzchar(nm1);
    check L21() else D3();
  L22():
    Sys_which = ldf `Sys.which`;
    check L23() else D4();
  D3():
    deopt 10 [r3];
  D4():
    deopt 13 [];
  L6(r14):
    r16 = `!`(r14);
    c2 = `as.logical`(r16);
    if c2 then L38() else L7();
  L21():
    goto L0(r3);
  L23():
    r5 = dyn Sys_which("nm");
    check L24() else D5();
  L34():
    nm6 = ld nm;
    check L36() else D10();
  L35():
    r13 = dyn base2(<sym nm>);
    goto L6(r13);
  D5():
    deopt 15 [r5];
  D10():
    deopt 34 [nm6];
  L7():
    file_path_as_absolute = ldf file_path_as_absolute;
    check L43() else D14();
  L24():
    st nm = r5;
    sym1 = ldf nzchar;
    base1 = ldf nzchar in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L25() else L26();
  L36():
    nm7 = force? nm6;
    checkMissing(nm7);
    nzchar2 = ldf nzchar in base;
    r15 = dyn nzchar2(nm7);
    check L37() else D11();
  L38():
    warning = ldf warning;
    check L39() else D12();
  D11():
    deopt 37 [r15];
  D12():
    deopt 40 [];
  D14():
    deopt 49 [];
  L2(r7):
    c1 = `as.logical`(r7);
    if c1 then L29() else L3();
  L25():
    nm2 = ld nm;
    check L27() else D6();
  L26():
    r6 = dyn base1(<sym nm>);
    goto L2(r6);
  L37():
    goto L6(r15);
  L39():
    r17 = dyn warning("this requires 'nm' to be on the PATH");
    check L40() else D13();
  L43():
    p1 = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    r21 = dyn file_path_as_absolute(p1);
    check L44() else D15();
  D6():
    deopt 19 [nm2];
  D13():
    deopt 42 [r17];
  D15():
    deopt 51 [r21];
  L3():
    goto L4(NULL);
  L4(r11):
    goto L5();
  L27():
    nm3 = force? nm2;
    checkMissing(nm3);
    nzchar1 = ldf nzchar in base;
    r8 = dyn nzchar1(nm3);
    check L28() else D7();
  L29():
    shQuote = ldf shQuote;
    check L30() else D8();
  L40():
    popenv;
    return NULL;
  L44():
    st f = r21;
    file_size = ldf `file.size`;
    check L45() else D16();
  D7():
    deopt 22 [r8];
  D8():
    deopt 24 [];
  D16():
    deopt 54 [];
  L28():
    goto L2(r8);
  L30():
    p = prom<V +>{
      nm4 = ld nm;
      nm5 = force? nm4;
      checkMissing(nm5);
      return nm5;
    };
    r10 = dyn shQuote(p);
    check L31() else D9();
  L45():
    p2 = prom<V +>{
      f3 = ld f;
      f4 = force? f3;
      checkMissing(f4);
      return f4;
    };
    r23 = dyn file_size(p2);
    check L46() else D17();
  D9():
    deopt 26 [r10];
  D17():
    deopt 56 [r23];
  L31():
    st nm = r10;
    goto L4(r10);
  L46():
    r24 = `!`(r23);
    c3 = `as.logical`(r24);
    if c3 then L47() else L9();
  L9():
    strsplit = ldf strsplit;
    check L50() else D18();
  L47():
    popenv;
    return NULL;
  D18():
    deopt 64 [];
  L50():
    p7 = prom<V +>{
      system = ldf system;
      p6 = prom<V +>{
        sprintf = ldf sprintf;
        p3 = prom<V +>{
          nm8 = ld nm;
          nm9 = force? nm8;
          checkMissing(nm9);
          return nm9;
        };
        p5 = prom<V +>{
          shQuote1 = ldf shQuote;
          p4 = prom<V +>{
            f5 = ld f;
            f6 = force? f5;
            checkMissing(f6);
            return f6;
          };
          r29 = dyn shQuote1(p4);
          return r29;
        };
        r31 = dyn sprintf("%s -Pg %s", p3, p5);
        return r31;
      };
      r33 = dyn system[, intern](p6, TRUE);
      return r33;
    };
    r35 = dyn strsplit(p7, " +");
    check L51() else D19();
  D19():
    deopt 67 [r35];
  L51():
    st s = r35;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L52() else L53();
  L11(r37):
    st n = r37;
    matrix = ldf matrix;
    check L56() else D22();
  L52():
    s = ld s;
    check L54() else D20();
  L53():
    r36 = dyn base3(<sym s>);
    goto L11(r36);
  D20():
    deopt 71 [s];
  D22():
    deopt 77 [];
  L54():
    s1 = force? s;
    checkMissing(s1);
    length = ldf length in base;
    r38 = dyn length(s1);
    check L55() else D21();
  L56():
    p8 = prom<V +>{
      n = ld n;
      n1 = force? n;
      checkMissing(n1);
      return n1;
    };
    r40 = dyn matrix[, nrow, ncol]("", p8, 4);
    check L57() else D23();
  D21():
    deopt 74 [r38];
  D23():
    deopt 83 [r40];
  L55():
    goto L11(r38);
  L57():
    st tab = r40;
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L58() else L59();
  L12(r42):
    l = ld tab;
    colnames__ = ldf `colnames<-`;
    check L61() else D25();
  L58():
    c4 = ldf c in base;
    r43 = dyn c4("name", "type", "value", "size");
    check L60() else D24();
  L59():
    r41 = dyn base4("name", "type", "value", "size");
    goto L12(r41);
  D24():
    deopt 92 [r43];
  D25():
    deopt 94 [r42, l, r42];
  L60():
    goto L12(r43);
  L61():
    r44 = dyn colnames__(l, NULL, r42);
    check L62() else D26();
  D26():
    deopt 96 [r42, r44];
  L62():
    st tab = r44;
    sym5 = ldf `rep.int`;
    base5 = ldf `rep.int` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L63() else L64();
  L13(r46):
    st i = r46;
    unlist = ldf unlist;
    check L71() else D31();
  L63():
    sym6 = ldf seq_len;
    base6 = ldf seq_len in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L65() else L66();
  L64():
    r45 = dyn base5(<lang seq_len(n)>, <lang lengths(s)>);
    goto L13(r45);
  D31():
    deopt 112 [];
  L14(r48):
    lengths = ldf lengths;
    check L68() else D28();
  L65():
    n2 = ld n;
    check L67() else D27();
  L66():
    r47 = dyn base6(<sym n>);
    goto L14(r47);
  L71():
    p12 = prom<V +>{
      lapply = ldf lapply;
      p10 = prom<V +>{
        s4 = ld s;
        s5 = force? s4;
        checkMissing(s5);
        return s5;
      };
      p11 = prom<V +>{
        seq_along = ld seq_along;
        seq_along1 = force? seq_along;
        checkMissing(seq_along1);
        return seq_along1;
      };
      r55 = dyn lapply(p10, p11);
      return r55;
    };
    r57 = dyn unlist(p12);
    check L72() else D32();
  D27():
    deopt 101 [n2];
  D28():
    deopt 105 [];
  D32():
    deopt 114 [r57];
  L67():
    n3 = force? n2;
    checkMissing(n3);
    r49 = seq_len(n3);
    goto L14(r49);
  L68():
    p9 = prom<V +>{
      s2 = ld s;
      s3 = force? s2;
      checkMissing(s3);
      return s3;
    };
    r51 = dyn lengths(p9);
    check L69() else D29();
  L72():
    st j = r57;
    unlist1 = ldf unlist;
    check L73() else D33();
  D29():
    deopt 107 [r51];
  D33():
    deopt 117 [];
  L69():
    rep_int = ldf `rep.int` in base;
    r52 = dyn rep_int(r48, r51);
    check L70() else D30();
  L73():
    p13 = prom<V +>{
      s6 = ld s;
      s7 = force? s6;
      checkMissing(s7);
      return s7;
    };
    r59 = dyn unlist1(p13);
    check L74() else D34();
  D30():
    deopt 109 [r52];
  D34():
    deopt 119 [r59];
  L70():
    goto L13(r52);
  L74():
    l1 = ld tab;
    c5 = `is.object`(l1);
    if c5 then L75() else L76(r59, l1);
  L15(dx1):
    st tab = dx1;
    tab = ld tab;
    check L81() else D38();
  L75():
    dr = tryDispatchBuiltin.0("[<-", l1, r59);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L77() else L76(r59, dr);
  L76(r61, l3):
    n4 = ld n;
    check L78() else D35();
  D35():
    deopt 121 [r61, l3, r59, n4];
  D38():
    deopt 131 [tab];
  L77():
    dx = getTryDispatchBuiltinValue(dr);
    goto L15(dx);
  L78():
    n5 = force? n4;
    checkMissing(n5);
    j = ld j;
    check L79() else D36();
  L81():
    tab1 = force? tab;
    checkMissing(tab1);
    popenv;
    return tab1;
  D36():
    deopt 122 [r61, l3, r59, n5, j];
  L79():
    j1 = force? j;
    checkMissing(j1);
    r64 = `-`(j1, 1);
    r65 = `*`(n5, r64);
    i = ld i;
    check L80() else D37();
  D37():
    deopt 126 [r61, l3, r59, r65, i];
  L80():
    i1 = force? i;
    checkMissing(i1);
    r66 = `+`(r65, i1);
    ___ = ldf `[<-` in base;
    r67 = dyn ___(l3, r59, r66);
    goto L15(r67);
  }
}