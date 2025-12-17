fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3285517010;
    st `as.character.Rconcordance` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3285517010(x, targetfile, `...`) {
  (reg x:*, reg targetfile:*, reg ddd:dots) -+> V { var x:*, var targetfile:*, reg targetfile_isMissing:L, reg targetfile_orDefault:*, var `...`:dots?, reg x1:*, reg x2:V, reg concordance:*, reg concordance1:V, reg c:L, reg concordance3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg concordance4:*, reg concordance5:V, reg c1:L, reg concordance7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r1:V, reg character:cls, reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg concordance8:*, reg concordance9:V, reg c2:L, reg concordance11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg src:*, reg src1:V, reg length:cls, reg r8:V, reg rep_len:cls, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg src2:*, reg src3:V, reg length1:cls, reg r12:V, reg c3:L, reg src4:*, reg src5:V, reg c4:L, reg src7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __:cls, reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg unique:cls, reg srcfile:*, reg srcfile1:V, reg p:p(V +), reg r17:V, reg length2:cls, reg r18:V, reg r19:V, reg c5:L, reg which:cls, reg srcfile2:*, reg srcfile3:V, reg srcfile4:*, reg srcfile5:V, reg c6:L, reg srcfile8:V, reg srcfile9:V, reg dr8:V, reg dc4:L, reg dx8:V, reg srcfile11:V, reg dx9:V, reg __1:cls, reg r20:V, reg r21:V, reg p1:p(V +), reg r23:V, reg c7:L, reg r25:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __2:cls, reg r26:V, reg r27:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r29:V, reg r30:V, reg srcfile12:*, reg srcfile13:V, reg length3:cls, reg r31:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg r33:V, reg with:cls, reg rle:cls, reg diff:cls, reg src8:*, reg src9:V, reg c8:L, reg src11:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r34:V, reg src14:V, reg r35:V, reg n:*, reg n1:V, reg r36:I, reg __3:cls, reg r37:V, reg p2:p(V +), reg r39:V, reg p3:p(V +), reg r41:V, reg p4:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r43:V, reg r44:V, reg rbind:cls, reg lengths:*, reg lengths1:V, reg p5:p(V +), reg values:*, reg values1:V, reg p6:p(V +), reg r47:V, reg as_numeric:cls, reg r48:V, reg p7:p(V +), reg r50:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r51:V, reg r52:V, reg result:*, reg result1:V, reg paste0:cls, reg targetfile1:*, reg targetfile2:V, reg p8:p(V +), reg srcfile14:*, reg srcfile15:V, reg c9:L, reg srcfile17:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg __4:cls, reg r54:V, reg p9:p(V +), reg offset:*, reg offset1:V, reg c10:L, reg paste1:cls, reg offset2:*, reg offset3:V, reg p10:p(V +), reg r57:V, reg p11:p(V +), reg concordance12:*, reg concordance13:V, reg c11:L, reg concordance15:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r59:V, reg c12:L, reg dx19:V, reg dr18:V, reg dc9:L, reg dx20:V, reg dx21:V, reg __5:cls, reg r60:V, reg p12:p(V +), reg paste2:cls, reg vals:*, reg vals1:V, reg p13:p(V +), reg r63:V, reg p14:p(V +), reg r65:V, reg c13:cls, reg r66:V, reg offset4:*, reg offset5:V, reg n2:*, reg n3:V, reg r67:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r68:V, reg r69:V, reg n4:*, reg n5:V, reg r70:I, reg src15:*, reg src16:V, reg c14:L, reg src18:V, reg dr20:V, reg dc10:L, reg dx22:V, reg dx23:V, reg drop:*, reg drop1:V, reg r71:V, reg __6:cls, reg r72:V, reg srcfile18:*, reg srcfile19:V, reg c15:L, reg srcfile21:V, reg dr22:V, reg dc11:L, reg dx24:V, reg dx25:V, reg drop2:*, reg drop3:V, reg r73:V, reg __7:cls, reg r74:V, reg result2:*, reg result3:V |
    mkenv;
    st x = x;
    targetfile_isMissing = missing.0(targetfile);
    if targetfile_isMissing then L0("") else L0(targetfile);
  L0(targetfile_orDefault):
    st targetfile = targetfile_orDefault;
    st `...` = ddd;
    x1 = ld x;
    check L17() else D0();
  D0():
    deopt 0 [x1];
  L17():
    x2 = force? x1;
    checkMissing(x2);
    st concordance = x2;
    concordance = ld concordance;
    check L18() else D1();
  D1():
    deopt 3 [concordance];
  L18():
    concordance1 = force? concordance;
    checkMissing(concordance1);
    c = `is.object`(concordance1);
    if c then L20() else L21(concordance1);
  L19(dx1):
    st offset = dx1;
    concordance4 = ld concordance;
    check L23() else D2();
  L20():
    dr = tryDispatchBuiltin.1("$", concordance1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L22() else L21(dr);
  L21(concordance3):
    r = `$`(concordance3, <sym offset>);
    goto L19(r);
  D2():
    deopt 7 [concordance4];
  L22():
    dx = getTryDispatchBuiltinValue(dr);
    goto L19(dx);
  L23():
    concordance5 = force? concordance4;
    checkMissing(concordance5);
    c1 = `is.object`(concordance5);
    if c1 then L25() else L26(concordance5);
  L24(dx3):
    st src = dx3;
    character = ldf character;
    check L28() else D3();
  L25():
    dr2 = tryDispatchBuiltin.1("$", concordance5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L27() else L26(dr2);
  L26(concordance7):
    r1 = `$`(concordance7, <sym srcLine>);
    goto L24(r1);
  D3():
    deopt 12 [];
  L27():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L24(dx2);
  L28():
    r2 = dyn character();
    check L29() else D4();
  D4():
    deopt 13 [r2];
  L29():
    st result = r2;
    sym = ldf rep_len;
    base = ldf rep_len in base;
    guard = `==`.4(sym, base);
    if guard then L30() else L31();
  L1(r4):
    st srcfile = r4;
    goto L16();
  L30():
    concordance8 = ld concordance;
    check L32() else D5();
  L31():
    r3 = dyn base(<lang `$`(concordance, srcFile)>, <lang length(src)>);
    goto L1(r3);
  D5():
    deopt 17 [concordance8];
  L16():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L42() else L43();
  L32():
    concordance9 = force? concordance8;
    checkMissing(concordance9);
    c2 = `is.object`(concordance9);
    if c2 then L34() else L35(concordance9);
  L3(r11):
    c3 = `as.logical`(r11);
    if c3 then L46() else L4();
  L33(dx5):
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L37() else L38();
  L34():
    dr4 = tryDispatchBuiltin.1("$", concordance9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L36() else L35(dr4);
  L35(concordance11):
    r5 = `$`(concordance11, <sym srcFile>);
    goto L33(r5);
  L42():
    src2 = ld src;
    check L44() else D9();
  L43():
    r10 = dyn base2(<sym src>);
    goto L3(r10);
  D9():
    deopt 31 [src2];
  L2(r7):
    rep_len = ldf rep_len in base;
    r9 = dyn rep_len(dx5, r7);
    check L41() else D8();
  L4():
    result2 = ld result;
    check L93() else D32();
  L36():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L33(dx4);
  L37():
    src = ld src;
    check L39() else D6();
  L38():
    r6 = dyn base1(<sym src>);
    goto L2(r6);
  L44():
    src3 = force? src2;
    checkMissing(src3);
    length1 = ldf length in base;
    r12 = dyn length1(src3);
    check L45() else D10();
  L46():
    src4 = ld src;
    check L47() else D11();
  D6():
    deopt 22 [src];
  D8():
    deopt 27 [r9];
  D10():
    deopt 34 [r12];
  D11():
    deopt 35 [src4];
  D32():
    deopt 121 [result2];
  L39():
    src1 = force? src;
    checkMissing(src1);
    length = ldf length in base;
    r8 = dyn length(src1);
    check L40() else D7();
  L41():
    goto L1(r9);
  L45():
    goto L3(r12);
  L47():
    src5 = force? src4;
    checkMissing(src5);
    c4 = `is.object`(src5);
    if c4 then L48() else L49(src5);
  L93():
    result3 = force? result2;
    checkMissing(result3);
    popenv;
    return result3;
  D7():
    deopt 25 [r8];
  L5(dx7):
    st first = dx7;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L51() else L52();
  L40():
    goto L2(r8);
  L48():
    dr6 = tryDispatchBuiltin.1("[", src5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L50() else L49(dr6);
  L49(src7):
    __ = ldf `[` in base;
    r13 = dyn __(src7, 1.0);
    goto L5(r13);
  L6(r15):
    r19 = `>`(r15, 1.0);
    c5 = `as.logical`(r19);
    if c5 then L56() else L7();
  L50():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L5(dx6);
  L51():
    unique = ldf unique;
    check L53() else D12();
  L52():
    r14 = dyn base3(<lang unique(srcfile)>);
    goto L6(r14);
  D12():
    deopt 44 [];
  L7():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L63() else L64();
  L9():
    sym5 = ldf with;
    base5 = ldf with in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L67() else L68();
  L53():
    p = prom<V +>{
      srcfile = ld srcfile;
      srcfile1 = force? srcfile;
      checkMissing(srcfile1);
      return srcfile1;
    };
    r17 = dyn unique(p);
    check L54() else D13();
  L56():
    which = ldf which;
    check L57() else D15();
  D13():
    deopt 46 [r17];
  D15():
    deopt 52 [];
  L10(r30):
    st n = r30;
    goto L9();
  L11(r33):
    st vals = r33;
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L71() else L72();
  L54():
    length2 = ldf length in base;
    r18 = dyn length2(r17);
    check L55() else D14();
  L57():
    p1 = prom<V +>{
      srcfile2 = ld srcfile;
      srcfile3 = force? srcfile2;
      checkMissing(srcfile3);
      srcfile4 = ld srcfile;
      srcfile5 = force? srcfile4;
      checkMissing(srcfile5);
      c6 = `is.object`(srcfile5);
      if c6 then L1() else L2(srcfile3, srcfile5);
    L0(srcfile11, dx9):
      r21 = `!=`(srcfile11, dx9);
      return r21;
    L1():
      dr8 = tryDispatchBuiltin.1("[", srcfile5);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(srcfile3, dr8);
    L2(srcfile8, srcfile9):
      __1 = ldf `[` in base;
      r20 = dyn __1(srcfile9, 1.0);
      goto L0(srcfile8, r20);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(srcfile3, dx8);
    };
    r23 = dyn which(p1);
    check L58() else D16();
  L63():
    srcfile12 = ld srcfile;
    check L65() else D17();
  L64():
    r29 = dyn base4(<sym srcfile>);
    goto L10(r29);
  L67():
    with = ldf with;
    check L69() else D19();
  L68():
    r32 = dyn base5(<lang rle(diff(`[`(src, seq_len(n))))>, <lang as.numeric(rbind(lengths, values))>);
    goto L11(r32);
  D14():
    deopt 48 [r18];
  D16():
    deopt 54 [r23];
  D17():
    deopt 63 [srcfile12];
  D19():
    deopt 70 [];
  L12(r52):
    st result = r52;
    offset4 = ld offset;
    check L77() else D25();
  L55():
    goto L6(r18);
  L58():
    c7 = `is.object`(r23);
    if c7 then L59() else L60(r23);
  L65():
    srcfile13 = force? srcfile12;
    checkMissing(srcfile13);
    length3 = ldf length in base;
    r31 = dyn length3(srcfile13);
    check L66() else D18();
  L69():
    p4 = prom<V +>{
      rle = ldf rle;
      p3 = prom<V +>{
        diff = ldf diff;
        p2 = prom<V +>{
          src8 = ld src;
          src9 = force? src8;
          checkMissing(src9);
          c8 = `is.object`(src9);
          if c8 then L2() else L3(src9);
        L0(dx13):
          return dx13;
        L2():
          dr12 = tryDispatchBuiltin.1("[", src9);
          dc6 = getTryDispatchBuiltinDispatched(dr12);
          if dc6 then L4() else L3(dr12);
        L3(src11):
          sym6 = ldf seq_len;
          base6 = ldf seq_len in base;
          guard6 = `==`.4(sym6, base6);
          if guard6 then L5() else L6();
        L1(src14, r35):
          __3 = ldf `[` in base;
          r37 = dyn __3(src14, r35);
          goto L0(r37);
        L4():
          dx12 = getTryDispatchBuiltinValue(dr12);
          goto L0(dx12);
        L5():
          n = ld n;
          n1 = force? n;
          checkMissing(n1);
          r36 = seq_len(n1);
          goto L1(src11, r36);
        L6():
          r34 = dyn base6(<sym n>);
          goto L1(src11, r34);
        };
        r39 = dyn diff(p2);
        return r39;
      };
      r41 = dyn rle(p3);
      return r41;
    };
    p7 = prom<V +>{
      sym7 = ldf `as.numeric`;
      base7 = ldf `as.numeric` in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r44):
      return r44;
    L1():
      rbind = ldf rbind;
      p5 = prom<V +>{
        lengths = ld lengths;
        lengths1 = force? lengths;
        checkMissing(lengths1);
        return lengths1;
      };
      p6 = prom<V +>{
        values = ld values;
        values1 = force? values;
        checkMissing(values1);
        return values1;
      };
      r47 = dyn rbind(p5, p6);
      as_numeric = ldf `as.numeric` in base;
      r48 = dyn as_numeric(r47);
      goto L0(r48);
    L2():
      r43 = dyn base7(<lang rbind(lengths, values)>);
      goto L0(r43);
    };
    r50 = dyn with(p4, p7);
    check L70() else D20();
  L71():
    result = ld result;
    check L73() else D21();
  L72():
    r51 = dyn base8(<sym result>, <lang paste0("concordance:", targetfile, ":", `[`(srcfile, 1.0), ":", if(offset, paste0("ofs ", offset, ":")), `[`(`$`(concordance, srcLine), 1.0), " ", paste(vals, collapse=" "))>);
    goto L12(r51);
  D18():
    deopt 66 [r31];
  D20():
    deopt 73 [r50];
  D21():
    deopt 77 [result];
  D25():
    deopt 94 [offset4];
  L8(dx11):
    r27 = `-`(dx11, 1.0);
    st n = r27;
    goto L9();
  L59():
    dr10 = tryDispatchBuiltin.1("[", r23);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L61() else L60(dr10);
  L60(r25):
    __2 = ldf `[` in base;
    r26 = dyn __2(r25, 1.0);
    goto L8(r26);
  L66():
    goto L10(r31);
  L70():
    goto L11(r50);
  L73():
    result1 = force? result;
    checkMissing(result1);
    paste0 = ldf paste0;
    check L74() else D22();
  L77():
    offset5 = force? offset4;
    checkMissing(offset5);
    n2 = ld n;
    check L78() else D26();
  D22():
    deopt 80 [];
  D26():
    deopt 95 [offset5, n2];
  L61():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L8(dx10);
  L74():
    p8 = prom<V +>{
      targetfile1 = ld targetfile;
      targetfile2 = force? targetfile1;
      checkMissing(targetfile2);
      return targetfile2;
    };
    p9 = prom<V +>{
      srcfile14 = ld srcfile;
      srcfile15 = force? srcfile14;
      checkMissing(srcfile15);
      c9 = `is.object`(srcfile15);
      if c9 then L1() else L2(srcfile15);
    L0(dx15):
      return dx15;
    L1():
      dr14 = tryDispatchBuiltin.1("[", srcfile15);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(srcfile17):
      __4 = ldf `[` in base;
      r54 = dyn __4(srcfile17, 1.0);
      goto L0(r54);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    };
    p11 = prom<V +>{
      offset = ld offset;
      offset1 = force? offset;
      checkMissing(offset1);
      c10 = `as.logical`(offset1);
      if c10 then L1() else L0();
    L0():
      invisible.0();
      return NULL;
    L1():
      paste1 = ldf paste0;
      p10 = prom<V +>{
        offset2 = ld offset;
        offset3 = force? offset2;
        checkMissing(offset3);
        return offset3;
      };
      r57 = dyn paste1("ofs ", p10, ":");
      return r57;
    };
    p12 = prom<V +>{
      concordance12 = ld concordance;
      concordance13 = force? concordance12;
      checkMissing(concordance13);
      c11 = `is.object`(concordance13);
      if c11 then L2() else L3(concordance13);
    L1(dx17):
      c12 = `is.object`(dx17);
      if c12 then L5() else L6(dx17);
    L2():
      dr16 = tryDispatchBuiltin.1("$", concordance13);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L4() else L3(dr16);
    L3(concordance15):
      r59 = `$`(concordance15, <sym srcLine>);
      goto L1(r59);
    L0(dx21):
      return dx21;
    L4():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L1(dx16);
    L5():
      dr18 = tryDispatchBuiltin.1("[", dx17);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L7() else L6(dr18);
    L6(dx19):
      __5 = ldf `[` in base;
      r60 = dyn __5(dx19, 1.0);
      goto L0(r60);
    L7():
      dx20 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx20);
    };
    p14 = prom<V +>{
      paste2 = ldf paste;
      p13 = prom<V +>{
        vals = ld vals;
        vals1 = force? vals;
        checkMissing(vals1);
        return vals1;
      };
      r63 = dyn paste2[, collapse](p13, " ");
      return r63;
    };
    r65 = dyn paste0("concordance:", p8, ":", p9, ":", p11, p12, " ", p14);
    check L75() else D23();
  L78():
    n3 = force? n2;
    checkMissing(n3);
    r67 = `+`(offset5, n3);
    st offset = r67;
    sym9 = ldf seq_len;
    base9 = ldf seq_len in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L79() else L80();
  D23():
    deopt 90 [r65];
  L13(r69):
    st drop = r69;
    src15 = ld src;
    check L82() else D28();
  L75():
    c13 = ldf c in base;
    r66 = dyn c13(result1, r65);
    check L76() else D24();
  L79():
    n4 = ld n;
    check L81() else D27();
  L80():
    r68 = dyn base9(<sym n>);
    goto L13(r68);
  D24():
    deopt 92 [r66];
  D27():
    deopt 100 [n4];
  D28():
    deopt 104 [src15];
  L76():
    goto L12(r66);
  L81():
    n5 = force? n4;
    checkMissing(n5);
    r70 = seq_len(n5);
    goto L13(r70);
  L82():
    src16 = force? src15;
    checkMissing(src16);
    c14 = `is.object`(src16);
    if c14 then L83() else L84(src16);
  L14(dx23):
    st src = dx23;
    srcfile18 = ld srcfile;
    check L87() else D30();
  L83():
    dr20 = tryDispatchBuiltin.1("[", src16);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L85() else L84(dr20);
  L84(src18):
    drop = ld drop;
    check L86() else D29();
  D29():
    deopt 106 [src18, drop];
  D30():
    deopt 111 [srcfile18];
  L85():
    dx22 = getTryDispatchBuiltinValue(dr20);
    goto L14(dx22);
  L86():
    drop1 = force? drop;
    checkMissing(drop1);
    r71 = `-`(<missing>, drop1);
    __6 = ldf `[` in base;
    r72 = dyn __6(src18, r71);
    goto L14(r72);
  L87():
    srcfile19 = force? srcfile18;
    checkMissing(srcfile19);
    c15 = `is.object`(srcfile19);
    if c15 then L88() else L89(srcfile19);
  L15(dx25):
    st srcfile = dx25;
    goto L16();
  L88():
    dr22 = tryDispatchBuiltin.1("[", srcfile19);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L90() else L89(dr22);
  L89(srcfile21):
    drop2 = ld drop;
    check L91() else D31();
  D31():
    deopt 113 [srcfile21, drop2];
  L90():
    dx24 = getTryDispatchBuiltinValue(dr22);
    goto L15(dx24);
  L91():
    drop3 = force? drop2;
    checkMissing(drop3);
    r73 = `-`(<missing>, drop3);
    __7 = ldf `[` in base;
    r74 = dyn __7(srcfile21, r73);
    goto L15(r74);
  }
}