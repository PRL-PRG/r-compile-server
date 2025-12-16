fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1839089227;
    st srcfilecopy = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1839089227(filename, lines, timestamp, isFile) {
  (reg filename:*, reg lines:*, reg timestamp:*, reg isFile:*) -+> V { var filename:*, var lines:*, var timestamp:*, reg timestamp_isMissing:L, reg timestamp_orDefault:*, reg Sys_time:cls, reg r:V, reg p:p(V +), var isFile:*, reg isFile_isMissing:L, reg isFile_orDefault:*, reg stopifnot:cls, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg filename1:*, reg filename2:V, reg c:L, reg p1:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg filename3:*, reg filename4:V, reg length:cls, reg r7:V, reg r8:V, reg p2:p(V +), reg r10:V, reg new_env:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg emptyenv:cls, reg r13:V, reg p3:p(V +), reg r15:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg grepl:cls, reg lines1:*, reg lines2:V, reg p4:p(V +), reg r19:V, reg any:cls, reg r20:V, reg c1:L, reg unlist:cls, reg strsplit:cls, reg sub:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg r22:V, reg lines3:*, reg lines4:V, reg as_character:cls, reg r23:V, reg p5:p(V +), reg r25:V, reg p6:p(V +), reg r27:V, reg p7:p(V +), reg r29:V, reg filename5:*, reg filename6:V, reg l:*, reg c2:L, reg filename8:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r31:V, reg getwd:cls, reg r32:V, reg l3:*, reg c3:L, reg r34:V, reg l5:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r37:V, reg isFile1:*, reg isFile2:V, reg l6:*, reg c4:L, reg isFile4:V, reg l8:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r38:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r39:V, reg r40:V, reg lines5:*, reg lines6:V, reg as_character1:cls, reg r41:V, reg l9:*, reg c5:L, reg r43:V, reg l11:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r46:V, reg l12:*, reg c6:L, reg r48:L, reg l14:*, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r51:V, reg timestamp1:*, reg timestamp2:V, reg l15:*, reg c7:L, reg timestamp4:V, reg l17:*, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r52:V, reg l18:*, reg c8:L, reg r54:S, reg l20:*, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r57:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r58:V, reg r59:V, reg c9:cls, reg r60:V, reg l21:*, reg class__:cls, reg r61:V, reg e:*, reg e1:V |
    mkenv;
    st filename = filename;
    st lines = lines;
    timestamp_isMissing = missing.0(timestamp);
    if timestamp_isMissing then L0() else L1(timestamp);
  L0():
    p = prom<V +>{
      Sys_time = ldf `Sys.time`;
      r = dyn Sys_time();
      return r;
    };
    goto L1(p);
  L1(timestamp_orDefault):
    st timestamp = timestamp_orDefault;
    isFile_isMissing = missing.0(isFile);
    if isFile_isMissing then L2(FALSE) else L2(isFile);
  L2(isFile_orDefault):
    st isFile = isFile_orDefault;
    stopifnot = ldf stopifnot;
    check L8() else D0();
  D0():
    deopt 1 [];
  L8():
    p1 = prom<V +>{
      sym = ldf `is.character`;
      base = ldf `is.character` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      filename1 = ld filename;
      filename2 = force? filename1;
      checkMissing(filename2);
      c = `is.character`(filename2);
      goto L0(c);
    L2():
      r2 = dyn base(<sym filename>);
      goto L0(r2);
    };
    p2 = prom<V +>{
      sym1 = ldf length;
      base1 = ldf length in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r6):
      r8 = `==`(r6, 1);
      return r8;
    L1():
      filename3 = ld filename;
      filename4 = force? filename3;
      checkMissing(filename4);
      length = ldf length in base;
      r7 = dyn length(filename4);
      goto L0(r7);
    L2():
      r5 = dyn base1(<sym filename>);
      goto L0(r5);
    };
    r10 = dyn stopifnot(p1, p2);
    check L9() else D1();
  D1():
    deopt 4 [r10];
  L9():
    new_env = ldf `new.env`;
    check L10() else D2();
  D2():
    deopt 6 [];
  L10():
    p3 = prom<V +>{
      sym2 = ldf emptyenv;
      base2 = ldf emptyenv in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r12):
      return r12;
    L1():
      emptyenv = ldf emptyenv in base;
      r13 = dyn emptyenv();
      goto L0(r13);
    L2():
      r11 = dyn base2();
      goto L0(r11);
    };
    r15 = dyn new_env[parent](p3);
    check L11() else D3();
  D3():
    deopt 9 [r15];
  L11():
    st e = r15;
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L12() else L13();
  L3(r17):
    c1 = `as.logical`(r17);
    if c1 then L17() else L4();
  L12():
    grepl = ldf grepl;
    check L14() else D4();
  L13():
    r16 = dyn base3(<lang grepl("\n", lines, fixed=TRUE, useBytes=TRUE)>);
    goto L3(r16);
  D4():
    deopt 14 [];
  L4():
    goto L5();
  L5():
    filename5 = ld filename;
    check L21() else D9();
  L14():
    p4 = prom<V +>{
      lines1 = ld lines;
      lines2 = force? lines1;
      checkMissing(lines2);
      return lines2;
    };
    r19 = dyn grepl[, , fixed, useBytes]("\n", p4, TRUE, TRUE);
    check L15() else D5();
  L17():
    unlist = ldf unlist;
    check L18() else D7();
  D5():
    deopt 21 [r19];
  D7():
    deopt 25 [];
  D9():
    deopt 31 [filename5];
  L15():
    any = ldf any in base;
    r20 = dyn any(r19);
    check L16() else D6();
  L18():
    p7 = prom<V +>{
      strsplit = ldf strsplit;
      p6 = prom<V +>{
        sub = ldf sub;
        p5 = prom<V +>{
          sym4 = ldf `as.character`;
          base4 = ldf `as.character` in base;
          guard4 = `==`.4(sym4, base4);
          if guard4 then L1() else L2();
        L0(r22):
          return r22;
        L1():
          lines3 = ld lines;
          lines4 = force? lines3;
          checkMissing(lines4);
          as_character = ldf `as.character` in base;
          r23 = dyn as_character(lines4);
          goto L0(r23);
        L2():
          r21 = dyn base4(<sym lines>);
          goto L0(r21);
        };
        r25 = dyn sub("$", "\n", p5);
        return r25;
      };
      r27 = dyn strsplit(p6, "\n");
      return r27;
    };
    r29 = dyn unlist(p7);
    check L19() else D8();
  L21():
    filename6 = force? filename5;
    checkMissing(filename6);
    l = ld e;
    c2 = `is.object`(l);
    if c2 then L23() else L24(filename6, l);
  D6():
    deopt 23 [r20];
  D8():
    deopt 27 [r29];
  L16():
    goto L3(r20);
  L19():
    st lines = r29;
    goto L5();
  L22(dx1):
    st e = dx1;
    getwd = ldf getwd;
    check L26() else D10();
  L23():
    dr = tryDispatchBuiltin.0("$<-", l, filename6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L25() else L24(filename6, dr);
  L24(filename8, l2):
    r31 = `$<-`(l2, <sym filename>, filename6);
    goto L22(r31);
  D10():
    deopt 37 [];
  L25():
    dx = getTryDispatchBuiltinValue(dr);
    goto L22(dx);
  L26():
    r32 = dyn getwd();
    check L27() else D11();
  D11():
    deopt 38 [r32];
  L27():
    l3 = ld e;
    c3 = `is.object`(l3);
    if c3 then L29() else L30(r32, l3);
  L28(dx3):
    st e = dx3;
    isFile1 = ld isFile;
    check L32() else D12();
  L29():
    dr2 = tryDispatchBuiltin.0("$<-", l3, r32);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L31() else L30(r32, dr2);
  L30(r34, l5):
    r37 = `$<-`(l5, <sym wd>, r32);
    goto L28(r37);
  D12():
    deopt 42 [isFile1];
  L31():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L28(dx2);
  L32():
    isFile2 = force? isFile1;
    checkMissing(isFile2);
    l6 = ld e;
    c4 = `is.object`(l6);
    if c4 then L34() else L35(isFile2, l6);
  L33(dx5):
    st e = dx5;
    sym5 = ldf `as.character`;
    base5 = ldf `as.character` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L37() else L38();
  L34():
    dr4 = tryDispatchBuiltin.0("$<-", l6, isFile2);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L36() else L35(isFile2, dr4);
  L35(isFile4, l8):
    r38 = `$<-`(l8, <sym isFile>, isFile2);
    goto L33(r38);
  L6(r40):
    l9 = ld e;
    c5 = `is.object`(l9);
    if c5 then L42() else L43(r40, l9);
  L36():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L33(dx4);
  L37():
    lines5 = ld lines;
    check L39() else D13();
  L38():
    r39 = dyn base5(<sym lines>);
    goto L6(r39);
  D13():
    deopt 49 [lines5];
  L39():
    lines6 = force? lines5;
    checkMissing(lines6);
    as_character1 = ldf `as.character` in base;
    r41 = dyn as_character1(lines6);
    check L40() else D14();
  L41(dx7):
    st e = dx7;
    l12 = ld e;
    c6 = `is.object`(l12);
    if c6 then L46() else L47(TRUE, l12);
  L42():
    dr6 = tryDispatchBuiltin.0("$<-", l9, r40);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L44() else L43(r40, dr6);
  L43(r43, l11):
    r46 = `$<-`(l11, <sym lines>, r40);
    goto L41(r46);
  D14():
    deopt 52 [r41];
  L40():
    goto L6(r41);
  L44():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L41(dx6);
  L45(dx9):
    st e = dx9;
    timestamp1 = ld timestamp;
    check L49() else D15();
  L46():
    dr8 = tryDispatchBuiltin.0("$<-", l12, TRUE);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L48() else L47(TRUE, dr8);
  L47(r48, l14):
    r51 = `$<-`(l14, <sym fixedNewlines>, TRUE);
    goto L45(r51);
  D15():
    deopt 61 [timestamp1];
  L48():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L45(dx8);
  L49():
    timestamp2 = force? timestamp1;
    checkMissing(timestamp2);
    l15 = ld e;
    c7 = `is.object`(l15);
    if c7 then L51() else L52(timestamp2, l15);
  L50(dx11):
    st e = dx11;
    l18 = ld e;
    c8 = `is.object`(l18);
    if c8 then L55() else L56("unknown", l18);
  L51():
    dr10 = tryDispatchBuiltin.0("$<-", l15, timestamp2);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L53() else L52(timestamp2, dr10);
  L52(timestamp4, l17):
    r52 = `$<-`(l17, <sym timestamp>, timestamp2);
    goto L50(r52);
  L53():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L50(dx10);
  L54(dx13):
    st e = dx13;
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L58() else L59();
  L55():
    dr12 = tryDispatchBuiltin.0("$<-", l18, "unknown");
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L57() else L56("unknown", dr12);
  L56(r54, l20):
    r57 = `$<-`(l20, <sym Enc>, "unknown");
    goto L54(r57);
  L7(r59):
    l21 = ld e;
    class__ = ldf `class<-`;
    check L61() else D17();
  L57():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L54(dx12);
  L58():
    c9 = ldf c in base;
    r60 = dyn c9("srcfilecopy", "srcfile");
    check L60() else D16();
  L59():
    r58 = dyn base6("srcfilecopy", "srcfile");
    goto L7(r58);
  D16():
    deopt 76 [r60];
  D17():
    deopt 78 [r59, l21, r59];
  L60():
    goto L7(r60);
  L61():
    r61 = dyn class__(l21, NULL, r59);
    check L62() else D18();
  D18():
    deopt 80 [r59, r61];
  L62():
    st e = r61;
    e = ld e;
    check L63() else D19();
  D19():
    deopt 82 [e];
  L63():
    e1 = force? e;
    checkMissing(e1);
    popenv;
    return e1;
  }
}