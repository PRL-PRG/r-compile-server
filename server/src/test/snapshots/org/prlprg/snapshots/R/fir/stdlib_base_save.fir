fun main() {
  () -+> V { reg r:cls, reg setwd:cls, reg tempdir:cls, reg r1:V, reg p:p(V +), reg r3:V, reg __:cls, reg r4:V, reg r5:cls, reg r6:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg list:cls, reg r9:V, reg save:cls, reg x:*, reg x1:V, reg p1:p(V +), reg y:*, reg y1:V, reg p2:p(V +), reg r12:V, reg save_image:cls, reg r13:V, reg unlink:cls, reg r14:V, reg options:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg list1:cls, reg r17:V, reg p3:p(V +), reg r19:V, reg save_image1:cls, reg r20:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r21:V, reg r22:V, reg interactive:cls, reg r23:V, reg c:L, reg withAutoprint:cls, reg file_info:cls, reg readLines:cls, reg r25:V, reg p4:p(V +), reg r27:V, reg unlink1:cls, reg r29:V, reg setwd1:cls, reg oldwd:*, reg oldwd1:V, reg p5:p(V +), reg r31:V |
    mkenv;
    r = clos `inner-8140886`;
    st save = r;
    setwd = ldf setwd;
    check L4() else D0();
  D0():
    deopt 4 [];
  L4():
    p = prom<V +>{
      tempdir = ldf tempdir;
      r1 = dyn tempdir();
      return r1;
    };
    r3 = dyn setwd(p);
    check L5() else D1();
  D1():
    deopt 6 [r3];
  L5():
    st oldwd = r3;
    __ = ldf `::`;
    check L6() else D2();
  D2():
    deopt 9 [];
  L6():
    r4 = dyn __("stats", "runif");
    check L7() else D3();
  D3():
    deopt 12 [r4];
  L7():
    checkFun.0(r4);
    r5 = r4 as cls;
    r6 = dyn r5(20.0);
    check L8() else D4();
  D4():
    deopt 15 [r6];
  L8():
    st x = r6;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0(r8):
    st y = r8;
    save = ldf save;
    check L12() else D6();
  L9():
    list = ldf list in base;
    r9 = dyn list(1.0, TRUE, "oops");
    check L11() else D5();
  L10():
    r7 = dyn base[a, b, c](1.0, TRUE, "oops");
    goto L0(r7);
  D5():
    deopt 26 [r9];
  D6():
    deopt 29 [];
  L11():
    goto L0(r9);
  L12():
    p1 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    p2 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    r12 = dyn save[, , file](p1, p2, "xy.RData");
    check L13() else D7();
  D7():
    deopt 34 [r12];
  L13():
    save_image = ldf `save.image`;
    check L14() else D8();
  D8():
    deopt 36 [];
  L14():
    r13 = dyn save_image();
    check L15() else D9();
  D9():
    deopt 37 [r13];
  L15():
    unlink = ldf unlink;
    check L16() else D10();
  D10():
    deopt 39 [];
  L16():
    r14 = dyn unlink("xy.RData");
    check L17() else D11();
  D11():
    deopt 41 [r14];
  L17():
    options = ldf options;
    check L18() else D12();
  D12():
    deopt 43 [];
  L18():
    p3 = prom<V +>{
      sym1 = ldf list;
      base1 = ldf list in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r16):
      return r16;
    L1():
      list1 = ldf list in base;
      r17 = dyn list1(TRUE, FALSE);
      goto L0(r17);
    L2():
      r15 = dyn base1[ascii, safe](TRUE, FALSE);
      goto L0(r15);
    };
    r19 = dyn options[`save.defaults`](p3);
    check L19() else D13();
  D13():
    deopt 46 [r19];
  L19():
    save_image1 = ldf `save.image`;
    check L20() else D14();
  D14():
    deopt 48 [];
  L20():
    r20 = dyn save_image1();
    check L21() else D15();
  D15():
    deopt 49 [r20];
  L21():
    sym2 = ldf interactive;
    base2 = ldf interactive in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L22() else L23();
  L1(r22):
    c = `as.logical`(r22);
    if c then L25() else L2();
  L22():
    interactive = ldf interactive in base;
    r23 = dyn interactive();
    check L24() else D16();
  L23():
    r21 = dyn base2();
    goto L1(r21);
  D16():
    deopt 53 [r23];
  L2():
    goto L3();
  L3():
    unlink1 = ldf unlink;
    check L29() else D19();
  L24():
    goto L1(r23);
  L25():
    withAutoprint = ldf withAutoprint;
    check L26() else D17();
  D17():
    deopt 55 [];
  D19():
    deopt 61 [];
  L26():
    p4 = prom<V +>{
      file_info = ldf `file.info`;
      dyn file_info(".RData");
      readLines = ldf readLines;
      r25 = dyn readLines[, n](".RData", 7.0);
      return r25;
    };
    r27 = dyn withAutoprint(p4);
    check L27() else D18();
  L29():
    r29 = dyn unlink1(".RData");
    check L30() else D20();
  D18():
    deopt 57 [r27];
  D20():
    deopt 63 [r29];
  L27():
    goto L3();
  L30():
    setwd1 = ldf setwd;
    check L31() else D21();
  D21():
    deopt 65 [];
  L31():
    p5 = prom<V +>{
      oldwd = ld oldwd;
      oldwd1 = force? oldwd;
      checkMissing(oldwd1);
      return oldwd1;
    };
    r31 = dyn setwd1(p5);
    check L32() else D22();
  D22():
    deopt 67 [r31];
  L32():
    popenv;
    return r31;
  }
}
fun `inner-8140886`(`...`, list, file, ascii, version, envir, compress, compression_level, `eval.promises`, precheck) {
  (reg ddd:dots, reg list:*, reg file:*, reg ascii:*, reg version:*, reg envir:*, reg compress:*, reg compression_level:*, reg eval_promises:*, reg precheck:*) -+> V { var `...`:dots?, var list:*, reg list_isMissing:L, reg list_orDefault:*, reg character:cls, reg r:V, reg p:p(V +), var file:*, reg file_isMissing:L, reg file_orDefault:*, reg stop:cls, reg r2:V, reg p1:p(V +), var ascii:*, reg ascii_isMissing:L, reg ascii_orDefault:*, var version:*, reg version_isMissing:L, reg version_orDefault:*, var envir:*, reg envir_isMissing:L, reg envir_orDefault:*, reg parent_frame:cls, reg r4:V, reg p2:p(V +), var compress:*, reg compress_isMissing:L, reg compress_orDefault:*, reg isTRUE:cls, reg ascii1:*, reg ascii2:V, reg r6:V, reg p3:p(V +), reg r8:V, reg p4:p(V +), var compression_level:*, var `eval.promises`:*, reg eval_promises_isMissing:L, reg eval_promises_orDefault:*, var precheck:*, reg precheck_isMissing:L, reg precheck_orDefault:*, reg getOption:cls, reg r10:V, reg sym:cls, reg base:cls, reg guard:L, reg r11:V, reg r12:V, reg missing:cls, reg r13:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg c5:L, reg r15:V, reg opts:*, reg opts1:V, reg c6:L, reg c8:L, reg opts3:V, reg dr:V, reg dc:L, reg dx:V, reg c10:L, reg dx1:V, reg r16:V, reg c11:V, reg r17:V, reg c12:L, reg c13:V, reg c15:L, reg opts4:*, reg opts5:V, reg c16:L, reg opts7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r18:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg r20:V, reg missing1:cls, reg r21:V, reg c17:L, reg c19:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg c22:L, reg r23:V, reg opts8:*, reg opts9:V, reg c23:L, reg c25:L, reg opts11:V, reg dr4:V, reg dc2:L, reg dx5:V, reg c27:L, reg dx6:V, reg r24:V, reg c28:V, reg r25:V, reg c29:L, reg c30:V, reg c32:L, reg opts12:*, reg opts13:V, reg c33:L, reg opts15:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg r26:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r27:V, reg r28:V, reg missing2:cls, reg r29:V, reg c34:L, reg c36:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r30:V, reg c39:L, reg r31:V, reg opts16:*, reg opts17:V, reg c40:L, reg c42:L, reg opts19:V, reg dr8:V, reg dc4:L, reg dx10:V, reg c44:L, reg dx11:V, reg r32:V, reg c45:V, reg r33:V, reg c46:L, reg c47:V, reg c49:L, reg opts20:*, reg opts21:V, reg c50:L, reg opts23:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg r34:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r35:V, reg r36:V, reg missing3:cls, reg r37:V, reg c51:L, reg opts24:*, reg opts25:V, reg c52:L, reg opts27:V, reg dr12:V, reg dc6:L, reg dx15:V, reg dx16:V, reg r38:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r39:V, reg r40:V, reg version1:*, reg version2:V, reg c53:V, reg r41:V, reg c54:L, reg c56:V, reg version3:*, reg version4:V, reg r42:V, reg c57:L, reg c58:V, reg c60:L, reg warning:cls, reg r43:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r45:V, reg r46:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r47:V, reg r48:V, reg substitute:cls, reg r49:V, reg as_character:cls, reg r50:V, reg c61:L, reg r52:V, reg dr14:V, reg dc7:L, reg dx18:V, reg dx19:V, reg __:cls, reg r53:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r54:V, reg r55:V, reg missing4:cls, reg r56:V, reg c62:L, reg c64:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r57:V, reg c67:L, reg r58:V, reg names:*, reg names1:V, reg length:cls, reg r59:V, reg r60:V, reg c68:L, reg c69:V, reg c71:L, reg warning1:cls, reg r61:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r63:V, reg r64:V, reg list1:*, reg list2:V, reg names2:*, reg names3:V, reg c72:cls, reg r65:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r66:V, reg r67:V, reg version5:*, reg version6:V, reg c73:V, reg r68:V, reg c74:L, reg c76:V, reg version7:*, reg version8:V, reg r69:V, reg c77:L, reg c78:V, reg c80:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r70:V, reg r71:V, reg list3:*, reg list4:V, reg file1:*, reg file2:V, reg ascii3:*, reg ascii4:V, reg version9:*, reg version10:V, reg envir1:*, reg envir2:V, reg eval_promises1:*, reg eval_promises2:V, reg save:cls, reg r72:V, reg precheck1:*, reg precheck2:V, reg c81:L, reg vapply:cls, reg list5:*, reg list6:V, reg p5:p(V +), reg exists:*, reg exists1:V, reg p6:p(V +), reg envir3:*, reg envir4:V, reg p7:p(V +), reg r76:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r77:V, reg r78:V, reg ok:*, reg ok1:V, reg all:cls, reg r79:V, reg r80:V, reg c82:L, reg sym16:cls, reg base16:cls, reg guard16:L, reg r81:V, reg r82:V, reg ok2:*, reg ok3:V, reg r83:V, reg sum:cls, reg r84:V, reg stop1:cls, reg sprintf:cls, reg ngettext:cls, reg n:*, reg n1:V, reg p8:p(V +), reg r86:V, reg p9:p(V +), reg paste:cls, reg sQuote:cls, reg list7:*, reg list8:V, reg c83:L, reg list10:V, reg dr16:V, reg dc8:L, reg dx20:V, reg dx21:V, reg ok4:*, reg ok5:V, reg r88:V, reg __1:cls, reg r89:V, reg p10:p(V +), reg r91:V, reg p11:p(V +), reg r93:V, reg p12:p(V +), reg r95:V, reg p13:p(V +), reg r97:V, reg r98:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r100:V, reg r101:V, reg file3:*, reg file4:V, reg c84:L, reg c85:L, reg sym18:cls, reg base18:cls, reg guard18:L, reg r102:V, reg r103:V, reg file5:*, reg file6:V, reg nzchar:cls, reg r104:V, reg r105:V, reg c86:L, reg stop2:cls, reg gettextf:cls, reg r106:V, reg p14:p(V +), reg r108:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r110:V, reg r111:V, reg compress1:*, reg compress2:V, reg c87:L, reg r112:V, reg c88:L, reg sym20:cls, reg base20:cls, reg guard20:L, reg r113:V, reg r114:V, reg compress3:*, reg compress4:V, reg c89:L, reg r115:V, reg c90:L, reg stop3:cls, reg r116:V, reg compress5:*, reg compress6:V, reg c91:L, reg r118:S, reg compress7:*, reg compress8:V, reg c92:L, reg c93:L, reg c94:L, reg c95:L, reg c96:L, reg c97:L, reg c98:L, reg i_ddd:dots, reg i:V, reg c99:L, reg c100:L, reg c101:L, reg c102:L, reg c103:L, reg r120:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r121:V, reg r122:V, reg missing5:cls, reg r123:V, reg r124:V, reg c104:L, reg bzfile:cls, reg file7:*, reg file8:V, reg p15:p(V +), reg compression_level1:*, reg compression_level2:V, reg p16:p(V +), reg r127:V, reg r128:V, reg bzfile1:cls, reg file9:*, reg file10:V, reg p17:p(V +), reg r130:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r131:V, reg r132:V, reg missing6:cls, reg r133:V, reg r134:V, reg c105:L, reg xzfile:cls, reg file11:*, reg file12:V, reg p18:p(V +), reg compression_level3:*, reg compression_level4:V, reg p19:p(V +), reg r137:V, reg r138:V, reg xzfile1:cls, reg file13:*, reg file14:V, reg p20:p(V +), reg r140:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r141:V, reg r142:V, reg missing7:cls, reg r143:V, reg r144:V, reg c106:L, reg gzfile:cls, reg file15:*, reg file16:V, reg p21:p(V +), reg compression_level5:*, reg compression_level6:V, reg p22:p(V +), reg r147:V, reg r148:V, reg gzfile1:cls, reg file17:*, reg file18:V, reg p23:p(V +), reg r150:V, reg file19:cls, reg file20:*, reg file21:V, reg p24:p(V +), reg r152:V, reg stop4:cls, reg gettextf1:cls, reg compress9:*, reg compress10:V, reg p25:p(V +), reg r154:V, reg p26:p(V +), reg r156:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r157:V, reg r158:V, reg on_exit:cls, reg r159:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r161:V, reg r162:V, reg file22:*, reg file23:V, reg inherits:cls, reg r163:V, reg c107:L, reg file24:*, reg file25:V, reg stop5:cls, reg r164:V, reg isOpen:cls, reg con:*, reg con1:V, reg p27:p(V +), reg r166:V, reg c108:L, reg c110:V, reg ascii5:*, reg ascii6:V, reg r167:V, reg c111:L, reg c112:V, reg c114:L, reg c116:V, reg summary:cls, reg con2:*, reg con3:V, reg p28:p(V +), reg r169:V, reg c117:L, reg c119:L, reg r171:V, reg dr18:V, reg dc9:L, reg dx22:V, reg c121:L, reg dx23:V, reg r172:V, reg r173:V, reg c122:L, reg c123:V, reg c125:L, reg stop6:cls, reg r174:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r176:V, reg r177:V, reg list11:*, reg list12:V, reg con4:*, reg con5:V, reg ascii7:*, reg ascii8:V, reg version11:*, reg version12:V, reg envir5:*, reg envir6:V, reg eval_promises3:*, reg eval_promises4:V, reg saveToConn:cls, reg r178:V |
    mkenv;
    st `...` = ddd;
    list_isMissing = missing.0(list);
    if list_isMissing then L0() else L1(list);
  L0():
    p = prom<V +>{
      character = ldf character;
      r = dyn character();
      return r;
    };
    goto L1(p);
  L1(list_orDefault):
    st list = list_orDefault;
    file_isMissing = missing.0(file);
    if file_isMissing then L2() else L3(file);
  L2():
    p1 = prom<V +>{
      stop = ldf stop;
      r2 = dyn stop("'file' must be specified");
      return r2;
    };
    goto L3(p1);
  L3(file_orDefault):
    st file = file_orDefault;
    ascii_isMissing = missing.0(ascii);
    if ascii_isMissing then L4(FALSE) else L4(ascii);
  L4(ascii_orDefault):
    st ascii = ascii_orDefault;
    version_isMissing = missing.0(version);
    if version_isMissing then L5(NULL) else L5(version);
  L5(version_orDefault):
    st version = version_orDefault;
    envir_isMissing = missing.0(envir);
    if envir_isMissing then L6() else L7(envir);
  L6():
    p2 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r4 = dyn parent_frame();
      return r4;
    };
    goto L7(p2);
  L7(envir_orDefault):
    st envir = envir_orDefault;
    compress_isMissing = missing.0(compress);
    if compress_isMissing then L8() else L9(compress);
  L8():
    p4 = prom<V +>{
      isTRUE = ldf isTRUE;
      p3 = prom<V +>{
        ascii1 = ld ascii;
        ascii2 = force? ascii1;
        checkMissing(ascii2);
        r6 = `!`(ascii2);
        return r6;
      };
      r8 = dyn isTRUE(p3);
      return r8;
    };
    goto L9(p4);
  L9(compress_orDefault):
    st compress = compress_orDefault;
    st compression_level = compression_level;
    eval_promises_isMissing = missing.0(eval_promises);
    if eval_promises_isMissing then L10(TRUE) else L10(eval_promises);
  L10(eval_promises_orDefault):
    st `eval.promises` = eval_promises_orDefault;
    precheck_isMissing = missing.0(precheck);
    if precheck_isMissing then L11(TRUE) else L11(precheck);
  L11(precheck_orDefault):
    st precheck = precheck_orDefault;
    getOption = ldf getOption;
    check L91() else D0();
  D0():
    deopt 1 [];
  L91():
    r10 = dyn getOption("save.defaults");
    check L92() else D1();
  D1():
    deopt 3 [r10];
  L92():
    st opts = r10;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L93() else L94();
  L12(r12):
    c = `as.logical`(r12);
    if c then L95() else L13(c);
  L93():
    missing = ldf missing in base;
    r13 = dyn missing(<sym compress>);
    goto L12(r13);
  L94():
    r11 = dyn base(<sym compress>);
    goto L12(r11);
  L13(c2):
    c15 = `as.logical`(c2);
    if c15 then L104() else L15();
  L95():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L96() else L97();
  L14(c5, r15):
    r17 = `!`(r15);
    c12 = `as.logical`(r17);
    c13 = `&&`(c5, c12);
    goto L13(c13);
  L15():
    goto L16();
  L16():
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L111() else L112();
  L96():
    opts = ld opts;
    check L98() else D2();
  L97():
    r14 = dyn base1(<lang `$`(opts, compress)>);
    goto L14(c, r14);
  L104():
    opts4 = ld opts;
    check L105() else D3();
  D2():
    deopt 9 [c, opts];
  D3():
    deopt 15 [opts4];
  L17(r20):
    c17 = `as.logical`(r20);
    if c17 then L113() else L18(c17);
  L98():
    opts1 = force? opts;
    checkMissing(opts1);
    c6 = `is.object`(opts1);
    if c6 then L100() else L101(c, opts1);
  L105():
    opts5 = force? opts4;
    checkMissing(opts5);
    c16 = `is.object`(opts5);
    if c16 then L107() else L108(opts5);
  L111():
    missing1 = ldf missing in base;
    r21 = dyn missing1(<sym compression_level>);
    goto L17(r21);
  L112():
    r19 = dyn base2(<sym compression_level>);
    goto L17(r19);
  L18(c19):
    c32 = `as.logical`(c19);
    if c32 then L122() else L20();
  L99(c10, dx1):
    c11 = `==`(dx1, NULL);
    goto L14(c10, c11);
  L100():
    dr = tryDispatchBuiltin.1("$", opts1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L102() else L101(c, dr);
  L101(c8, opts3):
    r16 = `$`(opts3, <sym compress>);
    goto L99(c8, r16);
  L106(dx3):
    st compress = dx3;
    goto L16();
  L107():
    dr2 = tryDispatchBuiltin.1("$", opts5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L109() else L108(dr2);
  L108(opts7):
    r18 = `$`(opts7, <sym compress>);
    goto L106(r18);
  L113():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L114() else L115();
  L19(c22, r23):
    r25 = `!`(r23);
    c29 = `as.logical`(r25);
    c30 = `&&`(c22, c29);
    goto L18(c30);
  L20():
    goto L21();
  L21():
    sym4 = ldf missing;
    base4 = ldf missing in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L129() else L130();
  L102():
    dx = getTryDispatchBuiltinValue(dr);
    goto L99(c, dx);
  L109():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L106(dx2);
  L114():
    opts8 = ld opts;
    check L116() else D4();
  L115():
    r22 = dyn base3(<lang `$`(opts, compression_level)>);
    goto L19(c17, r22);
  L122():
    opts12 = ld opts;
    check L123() else D5();
  D4():
    deopt 25 [c17, opts8];
  D5():
    deopt 31 [opts12];
  L22(r28):
    c34 = `as.logical`(r28);
    if c34 then L131() else L23(c34);
  L116():
    opts9 = force? opts8;
    checkMissing(opts9);
    c23 = `is.object`(opts9);
    if c23 then L118() else L119(c17, opts9);
  L123():
    opts13 = force? opts12;
    checkMissing(opts13);
    c33 = `is.object`(opts13);
    if c33 then L125() else L126(opts13);
  L129():
    missing2 = ldf missing in base;
    r29 = dyn missing2(<sym ascii>);
    goto L22(r29);
  L130():
    r27 = dyn base4(<sym ascii>);
    goto L22(r27);
  L23(c36):
    c49 = `as.logical`(c36);
    if c49 then L140() else L25();
  L117(c27, dx6):
    c28 = `==`(dx6, NULL);
    goto L19(c27, c28);
  L118():
    dr4 = tryDispatchBuiltin.1("$", opts9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L120() else L119(c17, dr4);
  L119(c25, opts11):
    r24 = `$`(opts11, <sym compression_level>);
    goto L117(c25, r24);
  L124(dx8):
    st compression_level = dx8;
    goto L21();
  L125():
    dr6 = tryDispatchBuiltin.1("$", opts13);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L127() else L126(dr6);
  L126(opts15):
    r26 = `$`(opts15, <sym compression_level>);
    goto L124(r26);
  L131():
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L132() else L133();
  L24(c39, r31):
    r33 = `!`(r31);
    c46 = `as.logical`(r33);
    c47 = `&&`(c39, c46);
    goto L23(c47);
  L25():
    goto L26();
  L26():
    sym6 = ldf missing;
    base6 = ldf missing in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L147() else L148();
  L120():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L117(c17, dx5);
  L127():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L124(dx7);
  L132():
    opts16 = ld opts;
    check L134() else D6();
  L133():
    r30 = dyn base5(<lang `$`(opts, ascii)>);
    goto L24(c34, r30);
  L140():
    opts20 = ld opts;
    check L141() else D7();
  D6():
    deopt 41 [c34, opts16];
  D7():
    deopt 47 [opts20];
  L27(r36):
    c51 = `as.logical`(r36);
    if c51 then L149() else L28();
  L134():
    opts17 = force? opts16;
    checkMissing(opts17);
    c40 = `is.object`(opts17);
    if c40 then L136() else L137(c34, opts17);
  L141():
    opts21 = force? opts20;
    checkMissing(opts21);
    c50 = `is.object`(opts21);
    if c50 then L143() else L144(opts21);
  L147():
    missing3 = ldf missing in base;
    r37 = dyn missing3(<sym version>);
    goto L27(r37);
  L148():
    r35 = dyn base6(<sym version>);
    goto L27(r35);
  L28():
    goto L29();
  L29():
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L156() else L157();
  L135(c44, dx11):
    c45 = `==`(dx11, NULL);
    goto L24(c44, c45);
  L136():
    dr8 = tryDispatchBuiltin.1("$", opts17);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L138() else L137(c34, dr8);
  L137(c42, opts19):
    r32 = `$`(opts19, <sym ascii>);
    goto L135(c42, r32);
  L142(dx13):
    st ascii = dx13;
    goto L26();
  L143():
    dr10 = tryDispatchBuiltin.1("$", opts21);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L145() else L144(dr10);
  L144(opts23):
    r34 = `$`(opts23, <sym ascii>);
    goto L142(r34);
  L149():
    opts24 = ld opts;
    check L150() else D8();
  D8():
    deopt 56 [opts24];
  L30(r40):
    r41 = `!`(r40);
    c54 = `as.logical`(r41);
    if c54 then L159() else L31(c54);
  L138():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L135(c34, dx10);
  L145():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L142(dx12);
  L150():
    opts25 = force? opts24;
    checkMissing(opts25);
    c52 = `is.object`(opts25);
    if c52 then L152() else L153(opts25);
  L156():
    version1 = ld version;
    check L158() else D9();
  L157():
    r39 = dyn base7(<sym version>);
    goto L30(r39);
  D9():
    deopt 63 [version1];
  L31(c56):
    c60 = `as.logical`(c56);
    if c60 then L162() else L32();
  L151(dx16):
    st version = dx16;
    goto L29();
  L152():
    dr12 = tryDispatchBuiltin.1("$", opts25);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L154() else L153(dr12);
  L153(opts27):
    r38 = `$`(opts27, <sym version>);
    goto L151(r38);
  L158():
    version2 = force? version1;
    checkMissing(version2);
    c53 = `==`(version2, NULL);
    goto L30(c53);
  L159():
    version3 = ld version;
    check L160() else D10();
  D10():
    deopt 67 [c54, version3];
  L32():
    goto L33();
  L33():
    sym8 = ldf `as.character`;
    base8 = ldf `as.character` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L166() else L167();
  L154():
    dx15 = getTryDispatchBuiltinValue(dr12);
    goto L151(dx15);
  L160():
    version4 = force? version3;
    checkMissing(version4);
    r42 = `<`(version4, 2.0);
    c57 = `as.logical`(r42);
    c58 = `&&`(c54, c57);
    goto L31(c58);
  L162():
    warning = ldf warning;
    check L163() else D11();
  D11():
    deopt 73 [];
  L34(r46):
    c61 = `is.object`(r46);
    if c61 then L171() else L172(r46);
  L163():
    r43 = dyn warning[, domain]("Use of save versions prior to 2 is deprecated", NA_LGL);
    check L164() else D12();
  L166():
    sym9 = ldf substitute;
    base9 = ldf substitute in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L168() else L169();
  L167():
    r45 = dyn base8(<lang substitute(list(...))>);
    goto L34(r45);
  D12():
    deopt 77 [r43];
  L35(r48):
    as_character = ldf `as.character` in base;
    r50 = dyn as_character(r48);
    check L170() else D13();
  L36(dx19):
    st names = dx19;
    sym10 = ldf missing;
    base10 = ldf missing in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L174() else L175();
  L164():
    goto L33();
  L168():
    substitute = ldf substitute in base;
    r49 = dyn substitute(<lang list(...)>);
    goto L35(r49);
  L169():
    r47 = dyn base9(<lang list(...)>);
    goto L35(r47);
  L171():
    dr14 = tryDispatchBuiltin.1("[", r46);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L173() else L172(dr14);
  L172(r52):
    __ = ldf `[` in base;
    r53 = dyn __(r52, -1);
    goto L36(r53);
  D13():
    deopt 86 [r50];
  L37(r55):
    c62 = `as.logical`(r55);
    if c62 then L176() else L38(c62);
  L170():
    goto L34(r50);
  L173():
    dx18 = getTryDispatchBuiltinValue(dr14);
    goto L36(dx18);
  L174():
    missing4 = ldf missing in base;
    r56 = dyn missing4(<sym list>);
    goto L37(r56);
  L175():
    r54 = dyn base10(<sym list>);
    goto L37(r54);
  L38(c64):
    c71 = `as.logical`(c64);
    if c71 then L182() else L40();
  L176():
    sym11 = ldf length;
    base11 = ldf length in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L177() else L178();
  L39(c67, r58):
    r60 = `!`(r58);
    c68 = `as.logical`(r60);
    c69 = `&&`(c67, c68);
    goto L38(c69);
  L40():
    goto L41();
  L41():
    sym12 = ldf c;
    base12 = ldf c in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L186() else L187();
  L177():
    names = ld names;
    check L179() else D14();
  L178():
    r57 = dyn base11(<sym names>);
    goto L39(c62, r57);
  L182():
    warning1 = ldf warning;
    check L183() else D16();
  D14():
    deopt 96 [c62, names];
  D16():
    deopt 103 [];
  L42(r64):
    st list = r64;
    sym13 = ldf `is.null`;
    base13 = ldf `is.null` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L191() else L192();
  L179():
    names1 = force? names;
    checkMissing(names1);
    length = ldf length in base;
    r59 = dyn length(names1);
    check L180() else D15();
  L183():
    r61 = dyn warning1("nothing specified to be save()d");
    check L184() else D17();
  L186():
    list1 = ld list;
    check L188() else D18();
  L187():
    r63 = dyn base12(<sym list>, <sym names>);
    goto L42(r63);
  D15():
    deopt 99 [c62, r59];
  D17():
    deopt 105 [r61];
  D18():
    deopt 110 [list1];
  L43(r67):
    r68 = `!`(r67);
    c74 = `as.logical`(r68);
    if c74 then L194() else L44(c74);
  L180():
    goto L39(c62, r59);
  L184():
    goto L41();
  L188():
    list2 = force? list1;
    checkMissing(list2);
    names2 = ld names;
    check L189() else D19();
  L191():
    version5 = ld version;
    check L193() else D21();
  L192():
    r66 = dyn base13(<sym version>);
    goto L43(r66);
  D19():
    deopt 112 [names2];
  D21():
    deopt 118 [version5];
  L44(c76):
    c80 = `as.logical`(c76);
    if c80 then L197() else L45();
  L189():
    names3 = force? names2;
    checkMissing(names3);
    c72 = ldf c in base;
    r65 = dyn c72(list2, names3);
    check L190() else D20();
  L193():
    version6 = force? version5;
    checkMissing(version6);
    c73 = `==`(version6, NULL);
    goto L43(c73);
  L194():
    version7 = ld version;
    check L195() else D22();
  D20():
    deopt 115 [r65];
  D22():
    deopt 122 [c74, version7];
  L45():
    precheck1 = ld precheck;
    check L208() else D30();
  L190():
    goto L42(r65);
  L195():
    version8 = force? version7;
    checkMissing(version8);
    r69 = `==`(version8, 1.0);
    c77 = `as.logical`(r69);
    c78 = `&&`(c74, c77);
    goto L44(c78);
  L197():
    sym14 = ldf `.Internal`;
    base14 = ldf `.Internal` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L198() else L199();
  D30():
    deopt 143 [precheck1];
  L46(r71):
    popenv;
    return r71;
  L198():
    list3 = ld list;
    check L200() else D23();
  L199():
    r70 = dyn base14(<lang save(list, file, ascii, version, envir, eval.promises)>);
    goto L46(r70);
  L208():
    precheck2 = force? precheck1;
    checkMissing(precheck2);
    c81 = `as.logical`(precheck2);
    if c81 then L209() else L47();
  D23():
    deopt 129 [list3];
  L47():
    goto L52();
  L52():
    sym17 = ldf `is.character`;
    base17 = ldf `is.character` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L225() else L226();
  L200():
    list4 = force? list3;
    checkMissing(list4);
    file1 = ld file;
    check L201() else D24();
  L209():
    vapply = ldf vapply;
    check L210() else D31();
  D24():
    deopt 131 [file1];
  D31():
    deopt 146 [];
  L53(r101):
    c85 = `as.logical`(r101);
    if c85 then L228() else L54();
  L201():
    file2 = force? file1;
    checkMissing(file2);
    ascii3 = ld ascii;
    check L202() else D25();
  L210():
    p5 = prom<V +>{
      list5 = ld list;
      list6 = force? list5;
      checkMissing(list6);
      return list6;
    };
    p6 = prom<V +>{
      exists = ld exists;
      exists1 = force? exists;
      checkMissing(exists1);
      return exists1;
    };
    p7 = prom<V +>{
      envir3 = ld envir;
      envir4 = force? envir3;
      checkMissing(envir4);
      return envir4;
    };
    r76 = dyn vapply[, , , envir](p5, p6, NA_LGL, p7);
    check L211() else D32();
  L225():
    file3 = ld file;
    check L227() else D39();
  L226():
    r100 = dyn base17(<sym file>);
    goto L53(r100);
  D25():
    deopt 133 [ascii3];
  D32():
    deopt 152 [r76];
  D39():
    deopt 180 [file3];
  L54():
    sym25 = ldf inherits;
    base25 = ldf inherits in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L305() else L306();
  L83():
    isOpen = ldf isOpen;
    check L314() else D71();
  L202():
    ascii4 = force? ascii3;
    checkMissing(ascii4);
    version9 = ld version;
    check L203() else D26();
  L211():
    st ok = r76;
    sym15 = ldf all;
    base15 = ldf all in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L212() else L213();
  L227():
    file4 = force? file3;
    checkMissing(file4);
    c84 = `is.character`(file4);
    goto L53(c84);
  L228():
    sym18 = ldf nzchar;
    base18 = ldf nzchar in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L229() else L230();
  D26():
    deopt 135 [version9];
  D71():
    deopt 307 [];
  L48(r78):
    r80 = `!`(r78);
    c82 = `as.logical`(r80);
    if c82 then L216() else L49();
  L55(r103):
    r105 = `!`(r103);
    c86 = `as.logical`(r105);
    if c86 then L233() else L56();
  L84(r162):
    c107 = `as.logical`(r162);
    if c107 then L309() else L85();
  L203():
    version10 = force? version9;
    checkMissing(version10);
    envir1 = ld envir;
    check L204() else D27();
  L212():
    ok = ld ok;
    check L214() else D33();
  L213():
    r77 = dyn base15(<sym ok>);
    goto L48(r77);
  L229():
    file5 = ld file;
    check L231() else D40();
  L230():
    r102 = dyn base18(<sym file>);
    goto L55(r102);
  L305():
    file22 = ld file;
    check L307() else D66();
  L306():
    r161 = dyn base25(<sym file>, "connection");
    goto L84(r161);
  L314():
    p27 = prom<V +>{
      con = ld con;
      con1 = force? con;
      checkMissing(con1);
      return con1;
    };
    r166 = dyn isOpen(p27);
    check L315() else D72();
  D27():
    deopt 137 [envir1];
  D33():
    deopt 156 [ok];
  D40():
    deopt 185 [file5];
  D66():
    deopt 293 [file22];
  D72():
    deopt 309 [r166];
  L49():
    goto L51(NULL);
  L51(r98):
    goto L52();
  L56():
    goto L57();
  L57():
    sym19 = ldf `is.character`;
    base19 = ldf `is.character` in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L237() else L238();
  L85():
    stop5 = ldf stop;
    check L312() else D69();
  L204():
    envir2 = force? envir1;
    checkMissing(envir2);
    eval_promises1 = ld `eval.promises`;
    check L205() else D28();
  L214():
    ok1 = force? ok;
    checkMissing(ok1);
    all = ldf all in base;
    r79 = dyn all(ok1);
    check L215() else D34();
  L216():
    sym16 = ldf sum;
    base16 = ldf sum in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L217() else L218();
  L231():
    file6 = force? file5;
    checkMissing(file6);
    nzchar = ldf nzchar in base;
    r104 = dyn nzchar(file6);
    check L232() else D41();
  L233():
    stop2 = ldf stop;
    check L234() else D42();
  L307():
    file23 = force? file22;
    checkMissing(file23);
    inherits = ldf inherits in base;
    r163 = dyn inherits(file23, "connection", FALSE);
    check L308() else D67();
  L309():
    file24 = ld file;
    check L310() else D68();
  L315():
    c108 = `as.logical`(r166);
    if c108 then L316() else L86(c108);
  D28():
    deopt 139 [eval_promises1];
  D34():
    deopt 159 [r79];
  D41():
    deopt 188 [r104];
  D42():
    deopt 191 [];
  D67():
    deopt 298 [r163];
  D68():
    deopt 299 [file24];
  D69():
    deopt 303 [];
  L50(r82):
    st n = r82;
    stop1 = ldf stop;
    check L221() else D37();
  L58(r111):
    r112 = `!`(r111);
    c88 = `as.logical`(r112);
    if c88 then L240() else L59();
  L86(c110):
    c114 = `as.logical`(c110);
    if c114 then L319() else L87(c114);
  L205():
    eval_promises2 = force? eval_promises1;
    checkMissing(eval_promises2);
    save = ldf save in base;
    r72 = dyn save(list4, file2, ascii4, version10, envir2, eval_promises2);
    check L206() else D29();
  L215():
    goto L48(r79);
  L217():
    ok2 = ld ok;
    check L219() else D35();
  L218():
    r81 = dyn base16(<lang `!`(ok)>);
    goto L50(r81);
  L232():
    goto L55(r104);
  L234():
    p14 = prom<V +>{
      gettextf = ldf gettextf;
      r106 = dyn gettextf("'%s' must be a non-empty string", "file");
      return r106;
    };
    r108 = dyn stop2[, domain](p14, NA_LGL);
    check L235() else D43();
  L237():
    compress1 = ld compress;
    check L239() else D44();
  L238():
    r110 = dyn base19(<sym compress>);
    goto L58(r110);
  L308():
    goto L84(r163);
  L310():
    file25 = force? file24;
    checkMissing(file25);
    st con = file25;
    goto L83();
  L312():
    r164 = dyn stop5("bad file argument");
    check L313() else D70();
  L316():
    ascii5 = ld ascii;
    check L317() else D73();
  D29():
    deopt 142 [r72];
  D35():
    deopt 163 [ok2];
  D37():
    deopt 170 [];
  D43():
    deopt 195 [r108];
  D44():
    deopt 199 [compress1];
  D70():
    deopt 305 [r164];
  D73():
    deopt 310 [c108, ascii5];
  L59():
    goto L65();
  L65():
    compress7 = ld compress;
    check L252() else D49();
  L87(c116):
    c125 = `as.logical`(c116);
    if c125 then L327() else L88();
  L206():
    goto L46(r72);
  L219():
    ok3 = force? ok2;
    checkMissing(ok3);
    r83 = `!`(ok3);
    sum = ldf sum in base;
    r84 = dyn sum(r83);
    check L220() else D36();
  L221():
    p13 = prom<V +>{
      sprintf = ldf sprintf;
      p9 = prom<V +>{
        ngettext = ldf ngettext;
        p8 = prom<V +>{
          n = ld n;
          n1 = force? n;
          checkMissing(n1);
          return n1;
        };
        r86 = dyn ngettext(p8, "object %s not found", "objects %s not found");
        return r86;
      };
      p12 = prom<V +>{
        paste = ldf paste;
        p11 = prom<V +>{
          sQuote = ldf sQuote;
          p10 = prom<V +>{
            list7 = ld list;
            list8 = force? list7;
            checkMissing(list8);
            c83 = `is.object`(list8);
            if c83 then L1() else L2(list8);
          L0(dx21):
            return dx21;
          L1():
            dr16 = tryDispatchBuiltin.1("[", list8);
            dc8 = getTryDispatchBuiltinDispatched(dr16);
            if dc8 then L3() else L2(dr16);
          L2(list10):
            ok4 = ld ok;
            ok5 = force? ok4;
            checkMissing(ok5);
            r88 = `!`(ok5);
            __1 = ldf `[` in base;
            r89 = dyn __1(list10, r88);
            goto L0(r89);
          L3():
            dx20 = getTryDispatchBuiltinValue(dr16);
            goto L0(dx20);
          };
          r91 = dyn sQuote(p10);
          return r91;
        };
        r93 = dyn paste[, collapse](p11, ", ");
        return r93;
      };
      r95 = dyn sprintf(p9, p12);
      return r95;
    };
    r97 = dyn stop1[, domain](p13, NA_LGL);
    check L222() else D38();
  L235():
    goto L57();
  L239():
    compress2 = force? compress1;
    checkMissing(compress2);
    c87 = `is.character`(compress2);
    goto L58(c87);
  L240():
    sym20 = ldf `is.logical`;
    base20 = ldf `is.logical` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L241() else L242();
  L313():
    goto L83();
  L317():
    ascii6 = force? ascii5;
    checkMissing(ascii6);
    r167 = `!`(ascii6);
    c111 = `as.logical`(r167);
    c112 = `&&`(c108, c111);
    goto L86(c112);
  L319():
    summary = ldf summary;
    check L320() else D74();
  D36():
    deopt 167 [r84];
  D38():
    deopt 174 [r97];
  D49():
    deopt 223 [compress7];
  D74():
    deopt 315 [c114];
  L60(r114):
    r115 = `!`(r114);
    c90 = `as.logical`(r115);
    if c90 then L244() else L61();
  L88():
    goto L89();
  L89():
    sym26 = ldf `.Internal`;
    base26 = ldf `.Internal` in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L331() else L332();
  L220():
    goto L50(r84);
  L222():
    goto L51(r97);
  L241():
    compress3 = ld compress;
    check L243() else D45();
  L242():
    r113 = dyn base20(<sym compress>);
    goto L60(r113);
  L252():
    compress8 = force? compress7;
    checkMissing(compress8);
    c92 = `is.vector`(compress8, "any");
    if c92 then L253() else L254();
  L320():
    p28 = prom<V +>{
      con2 = ld con;
      con3 = force? con2;
      checkMissing(con3);
      return con3;
    };
    r169 = dyn summary(p28);
    check L321() else D75();
  L327():
    stop6 = ldf stop;
    check L328() else D76();
  D45():
    deopt 204 [compress3];
  D75():
    deopt 317 [c114, r169];
  D76():
    deopt 323 [];
  L61():
    goto L62();
  L62():
    compress5 = ld compress;
    check L248() else D48();
  L90(r177):
    popenv;
    return r177;
  L243():
    compress4 = force? compress3;
    checkMissing(compress4);
    c89 = `is.logical`(compress4);
    goto L60(c89);
  L244():
    stop3 = ldf stop;
    check L245() else D46();
  L253():
    c93 = inherits(compress8, "factor", FALSE);
    if c93 then L255() else L256();
  L254():
    stop(<dot "EXPR must be a length 1 vector">, TRUE, NULL);
    unreachable;
  L321():
    c117 = `is.object`(r169);
    if c117 then L323() else L324(c114, r169);
  L328():
    r174 = dyn stop6("can only save to a binary connection");
    check L329() else D77();
  L331():
    list11 = ld list;
    check L333() else D78();
  L332():
    r176 = dyn base26(<lang saveToConn(list, con, ascii, version, envir, eval.promises)>);
    goto L90(r176);
  D46():
    deopt 209 [];
  D48():
    deopt 214 [compress5];
  D77():
    deopt 325 [r174];
  D78():
    deopt 330 [list11];
  L245():
    r116 = dyn stop3("'compress' must be logical or character");
    check L246() else D47();
  L248():
    compress6 = force? compress5;
    checkMissing(compress6);
    c91 = `as.logical`(compress6);
    if c91 then L249() else L63();
  L255():
    c94 = `is.character`(compress8);
    if c94 then L257() else L258();
  L256():
    warning(<dot "EXPR is a \"factor\", treated as integer.\n Consider using 'switch(as.character( * ), ...)' instead.">, TRUE, FALSE, FALSE, NULL);
    goto L255();
  L322(c121, dx23):
    r173 = `!=`(dx23, "binary");
    c122 = `as.logical`(r173);
    c123 = `&&`(c121, c122);
    goto L87(c123);
  L323():
    dr18 = tryDispatchBuiltin.1("$", r169);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L325() else L324(c114, dr18);
  L324(c119, r171):
    r172 = `$`(r171, <sym text>);
    goto L322(c119, r172);
  L329():
    goto L89();
  L333():
    list12 = force? list11;
    checkMissing(list12);
    con4 = ld con;
    check L334() else D79();
  D47():
    deopt 211 [r116];
  D79():
    deopt 332 [con4];
  L63():
    goto L64("no compression");
  L64(r118):
    st compress = r118;
    goto L65();
  L66():
    sym21 = ldf missing;
    base21 = ldf missing in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L269() else L270();
  L67():
    sym22 = ldf missing;
    base22 = ldf missing in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L278() else L279();
  L68():
    sym23 = ldf missing;
    base23 = ldf missing in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L287() else L288();
  L69():
    file19 = ldf file;
    check L296() else D62();
  L70():
    stop4 = ldf stop;
    check L299() else D64();
  L72(r120):
    st con = r120;
    sym24 = ldf `on.exit`;
    base24 = ldf `on.exit` in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L302() else L303();
  L246():
    goto L62();
  L249():
    goto L64("gzip");
  L257():
    c95 = `==`.6(compress8, "bzip2");
    if c95 then L66() else L259();
  L258():
    i_ddd = dots[compress8];
    i = `as.integer`(i_ddd);
    c99 = `==`.5(i, 1);
    if c99 then L66() else L263();
  L325():
    dx22 = getTryDispatchBuiltinValue(dr18);
    goto L322(c114, dx22);
  L334():
    con5 = force? con4;
    checkMissing(con5);
    ascii7 = ld ascii;
    check L335() else D80();
  D62():
    deopt 278 [];
  D64():
    deopt 283 [];
  D80():
    deopt 334 [ascii7];
  L73(r122):
    r124 = `!`(r122);
    c104 = `as.logical`(r124);
    if c104 then L271() else L74();
  L76(r132):
    r134 = `!`(r132);
    c105 = `as.logical`(r134);
    if c105 then L280() else L77();
  L79(r142):
    r144 = `!`(r142);
    c106 = `as.logical`(r144);
    if c106 then L289() else L80();
  L82(r158):
    goto L83();
  L259():
    c96 = `==`.6(compress8, "xz");
    if c96 then L67() else L260();
  L263():
    c100 = `==`.5(i, 2);
    if c100 then L67() else L264();
  L269():
    missing5 = ldf missing in base;
    r123 = dyn missing5(<sym compression_level>);
    goto L73(r123);
  L270():
    r121 = dyn base21(<sym compression_level>);
    goto L73(r121);
  L278():
    missing6 = ldf missing in base;
    r133 = dyn missing6(<sym compression_level>);
    goto L76(r133);
  L279():
    r131 = dyn base22(<sym compression_level>);
    goto L76(r131);
  L287():
    missing7 = ldf missing in base;
    r143 = dyn missing7(<sym compression_level>);
    goto L79(r143);
  L288():
    r141 = dyn base23(<sym compression_level>);
    goto L79(r141);
  L296():
    p24 = prom<V +>{
      file20 = ld file;
      file21 = force? file20;
      checkMissing(file21);
      return file21;
    };
    r152 = dyn file19(p24, "wb");
    check L297() else D63();
  L299():
    p26 = prom<V +>{
      gettextf1 = ldf gettextf;
      p25 = prom<V +>{
        compress9 = ld compress;
        compress10 = force? compress9;
        checkMissing(compress10);
        return compress10;
      };
      r154 = dyn gettextf1("'compress = \"%s\"' is invalid", p25);
      return r154;
    };
    r156 = dyn stop4(p26);
    check L300() else D65();
  L302():
    on_exit = ldf `on.exit` in base;
    r159 = dyn on_exit(<lang close(con)>);
    goto L82(r159);
  L303():
    r157 = dyn base24(<lang close(con)>);
    goto L82(r157);
  L335():
    ascii8 = force? ascii7;
    checkMissing(ascii8);
    version11 = ld version;
    check L336() else D81();
  D63():
    deopt 281 [r152];
  D65():
    deopt 285 [r156];
  D81():
    deopt 336 [version11];
  L74():
    bzfile1 = ldf bzfile;
    check L275() else D52();
  L75(r128):
    goto L72(r128);
  L77():
    xzfile1 = ldf xzfile;
    check L284() else D56();
  L78(r138):
    goto L72(r138);
  L80():
    gzfile1 = ldf gzfile;
    check L293() else D60();
  L81(r148):
    goto L72(r148);
  L260():
    c97 = `==`.6(compress8, "gzip");
    if c97 then L68() else L261();
  L264():
    c101 = `==`.5(i, 3);
    if c101 then L68() else L265();
  L271():
    bzfile = ldf bzfile;
    check L272() else D50();
  L280():
    xzfile = ldf xzfile;
    check L281() else D54();
  L289():
    gzfile = ldf gzfile;
    check L290() else D58();
  L297():
    goto L72(r152);
  L300():
    goto L72(r156);
  L336():
    version12 = force? version11;
    checkMissing(version12);
    envir5 = ld envir;
    check L337() else D82();
  D50():
    deopt 232 [];
  D52():
    deopt 239 [];
  D54():
    deopt 248 [];
  D56():
    deopt 255 [];
  D58():
    deopt 266 [];
  D60():
    deopt 273 [];
  D82():
    deopt 338 [envir5];
  L261():
    c98 = `==`.6(compress8, "no compression");
    if c98 then L69() else L262();
  L265():
    c102 = `==`.5(i, 4);
    if c102 then L69() else L266();
  L272():
    p15 = prom<V +>{
      file7 = ld file;
      file8 = force? file7;
      checkMissing(file8);
      return file8;
    };
    p16 = prom<V +>{
      compression_level1 = ld compression_level;
      compression_level2 = force? compression_level1;
      checkMissing(compression_level2);
      return compression_level2;
    };
    r127 = dyn bzfile[, , compression](p15, "wb", p16);
    check L273() else D51();
  L275():
    p17 = prom<V +>{
      file9 = ld file;
      file10 = force? file9;
      checkMissing(file10);
      return file10;
    };
    r130 = dyn bzfile1(p17, "wb");
    check L276() else D53();
  L281():
    p18 = prom<V +>{
      file11 = ld file;
      file12 = force? file11;
      checkMissing(file12);
      return file12;
    };
    p19 = prom<V +>{
      compression_level3 = ld compression_level;
      compression_level4 = force? compression_level3;
      checkMissing(compression_level4);
      return compression_level4;
    };
    r137 = dyn xzfile[, , compression](p18, "wb", p19);
    check L282() else D55();
  L284():
    p20 = prom<V +>{
      file13 = ld file;
      file14 = force? file13;
      checkMissing(file14);
      return file14;
    };
    r140 = dyn xzfile1[, , compression](p20, "wb", 9.0);
    check L285() else D57();
  L290():
    p21 = prom<V +>{
      file15 = ld file;
      file16 = force? file15;
      checkMissing(file16);
      return file16;
    };
    p22 = prom<V +>{
      compression_level5 = ld compression_level;
      compression_level6 = force? compression_level5;
      checkMissing(compression_level6);
      return compression_level6;
    };
    r147 = dyn gzfile[, , compression](p21, "wb", p22);
    check L291() else D59();
  L293():
    p23 = prom<V +>{
      file17 = ld file;
      file18 = force? file17;
      checkMissing(file18);
      return file18;
    };
    r150 = dyn gzfile1(p23, "wb");
    check L294() else D61();
  L337():
    envir6 = force? envir5;
    checkMissing(envir6);
    eval_promises3 = ld `eval.promises`;
    check L338() else D83();
  D51():
    deopt 237 [r127];
  D53():
    deopt 242 [r130];
  D55():
    deopt 253 [r137];
  D57():
    deopt 260 [r140];
  D59():
    deopt 271 [r147];
  D61():
    deopt 276 [r150];
  D83():
    deopt 340 [eval_promises3];
  L262():
    goto L70();
  L266():
    c103 = `==`.5(i, 5);
    if c103 then L70() else L267();
  L273():
    goto L75(r127);
  L276():
    goto L75(r130);
  L282():
    goto L78(r137);
  L285():
    goto L78(r140);
  L291():
    goto L81(r147);
  L294():
    goto L81(r150);
  L338():
    eval_promises4 = force? eval_promises3;
    checkMissing(eval_promises4);
    saveToConn = ldf saveToConn in base;
    r178 = dyn saveToConn(list12, con5, ascii8, version12, envir6, eval_promises4);
    check L339() else D84();
  D84():
    deopt 343 [r178];
  L267():
    goto L72(NULL);
  L339():
    goto L90(r178);
  }
}