fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1191512980;
    st `read.dcf` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1191512980(file, fields, all, `keep.white`) {
  (reg file:*, reg fields:*, reg all:*, reg keep_white:*) -+> V { var file:*, var fields:*, reg fields_isMissing:L, reg fields_orDefault:*, var all:*, reg all_isMissing:L, reg all_orDefault:*, var `keep.white`:*, reg keep_white_isMissing:L, reg keep_white_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg file1:*, reg file2:V, reg c:L, reg c1:L, reg gzfile:cls, reg file3:*, reg file4:V, reg p:p(V +), reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg on_exit:cls, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg file5:*, reg file6:V, reg inherits:cls, reg r10:V, reg r11:V, reg c2:L, reg stop:cls, reg r12:V, reg all1:*, reg all2:V, reg r14:V, reg c3:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg file7:*, reg file8:V, reg fields1:*, reg fields2:V, reg keep_white1:*, reg keep_white2:V, reg readDCF:cls, reg r17:V, reg r20:cls, reg readLines:cls, reg file9:*, reg file10:V, reg p1:p(V +), reg r22:V, reg grep:cls, reg paste0:cls, reg ascii_blank:*, reg ascii_blank1:V, reg p2:p(V +), reg r24:V, reg p3:p(V +), reg lines:*, reg lines1:V, reg p4:p(V +), reg r27:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r28:V, reg r29:V, reg ind:*, reg ind1:V, reg length:cls, reg r30:V, reg c4:L, reg substr:cls, reg lines2:*, reg lines3:V, reg c5:L, reg lines5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ind2:*, reg ind3:V, reg __:cls, reg r31:V, reg p5:p(V +), reg getOption:cls, reg r33:V, reg r34:V, reg p6:p(V +), reg r36:V, reg stop1:cls, reg gettextf:cls, reg paste1:cls, reg lines6:*, reg lines7:V, reg p7:p(V +), reg r38:V, reg p8:p(V +), reg r40:V, reg p9:p(V +), reg r42:V, reg grepl:cls, reg paste2:cls, reg ascii_space:*, reg ascii_space1:V, reg p10:p(V +), reg r45:V, reg p11:p(V +), reg lines8:*, reg lines9:V, reg p12:p(V +), reg r48:V, reg r49:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r50:V, reg r51:V, reg diff:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r52:V, reg r53:V, reg line_is_not_empty:*, reg line_is_not_empty1:V, reg c6:cls, reg r54:V, reg r55:V, reg p13:p(V +), reg r57:V, reg r58:V, reg cumsum:cls, reg r59:V, reg nums:*, reg nums1:V, reg c7:L, reg nums3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg line_is_not_empty2:*, reg line_is_not_empty3:V, reg __1:cls, reg r60:V, reg lines10:*, reg lines11:V, reg c8:L, reg lines13:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg line_is_not_empty4:*, reg line_is_not_empty5:V, reg __2:cls, reg r61:V, reg grepl1:cls, reg paste3:cls, reg ascii_space2:*, reg ascii_space3:V, reg p14:p(V +), reg ascii_space4:*, reg ascii_space5:V, reg p15:p(V +), reg r64:V, reg p16:p(V +), reg lines14:*, reg lines15:V, reg p17:p(V +), reg r67:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r68:V, reg r69:V, reg line_is_escaped_blank:*, reg line_is_escaped_blank1:V, reg any:cls, reg r70:V, reg c9:L, reg l:*, reg c10:L, reg r72:S, reg l2:*, reg dr6:V, reg dc3:L, reg dx6:V, reg r74:S, reg dx7:V, reg line_is_escaped_blank2:*, reg line_is_escaped_blank3:V, reg ___:cls, reg r75:V, reg grepl2:cls, reg paste4:cls, reg ascii_blank2:*, reg ascii_blank3:V, reg p18:p(V +), reg r78:V, reg p19:p(V +), reg lines16:*, reg lines17:V, reg p20:p(V +), reg r81:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r82:V, reg r83:V, reg which:cls, reg diff1:cls, reg nums4:*, reg nums5:V, reg p21:p(V +), reg r85:V, reg r86:V, reg p22:p(V +), reg r88:V, reg r89:V, reg c11:cls, reg r90:V, reg line_has_tag:*, reg line_has_tag1:V, reg c12:L, reg line_has_tag3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg pos:*, reg pos1:V, reg __3:cls, reg r91:V, reg r92:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r93:V, reg r94:V, reg ind4:*, reg ind5:V, reg any1:cls, reg r95:V, reg c13:L, reg substr1:cls, reg lines18:*, reg lines19:V, reg c14:L, reg lines21:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg pos2:*, reg pos3:V, reg c15:L, reg lines23:V, reg pos5:V, reg dr12:V, reg dc6:L, reg dx12:V, reg lines25:V, reg dx13:V, reg ind6:*, reg ind7:V, reg __4:cls, reg r96:V, reg __5:cls, reg r97:V, reg p23:p(V +), reg getOption1:cls, reg r99:V, reg r100:V, reg p24:p(V +), reg r102:V, reg stop2:cls, reg gettextf1:cls, reg paste5:cls, reg lines26:*, reg lines27:V, reg p25:p(V +), reg r104:V, reg p26:p(V +), reg r106:V, reg p27:p(V +), reg r108:V, reg rle:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r110:V, reg r111:V, reg line_has_tag4:*, reg line_has_tag5:V, reg cumsum1:cls, reg r112:V, reg p28:p(V +), reg r114:V, reg c16:L, reg r116:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r117:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r118:V, reg r119:V, reg lengths:*, reg lengths1:V, reg cumsum2:cls, reg r120:V, reg sub:cls, reg lines28:*, reg lines29:V, reg c17:L, reg lines31:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg line_has_tag6:*, reg line_has_tag7:V, reg __6:cls, reg r121:V, reg p29:p(V +), reg r123:V, reg sub1:cls, reg paste6:cls, reg ascii_space6:*, reg ascii_space7:V, reg p30:p(V +), reg r125:V, reg p31:p(V +), reg lines32:*, reg lines33:V, reg c18:L, reg lines35:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg line_has_tag8:*, reg line_has_tag9:V, reg __7:cls, reg r127:V, reg p32:p(V +), reg r129:V, reg l3:*, reg c19:L, reg r131:V, reg l5:*, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg line_has_tag10:*, reg line_has_tag11:V, reg ___1:cls, reg r134:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r135:V, reg r136:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r137:V, reg r138:V, reg tags:*, reg tags1:V, reg keep_white3:*, reg keep_white4:V, reg match:cls, reg r139:V, reg is_na:cls, reg r140:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r141:V, reg r142:V, reg fold:*, reg fold1:V, reg lengths2:*, reg lengths3:V, reg rep_int:cls, reg r143:V, reg sub2:cls, reg lines36:*, reg lines37:V, reg c20:L, reg lines39:V, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg foldable:*, reg foldable1:V, reg __8:cls, reg r144:V, reg p33:p(V +), reg r146:V, reg l6:*, reg c21:L, reg r148:V, reg l8:*, reg dr24:V, reg dc12:L, reg dx24:V, reg dx25:V, reg foldable2:*, reg foldable3:V, reg ___2:cls, reg r151:V, reg sub3:cls, reg lines40:*, reg lines41:V, reg c22:L, reg lines43:V, reg dr26:V, reg dc13:L, reg dx26:V, reg dx27:V, reg foldable4:*, reg foldable5:V, reg __9:cls, reg r152:V, reg p34:p(V +), reg r154:V, reg l9:*, reg c23:L, reg r156:V, reg l11:*, reg dr28:V, reg dc14:L, reg dx28:V, reg dx29:V, reg foldable6:*, reg foldable7:V, reg ___3:cls, reg r159:V, reg mapply:cls, reg r160:cls, reg p35:p(V +), reg sym15:cls, reg base15:cls, reg guard15:L, reg r162:V, reg r163:V, reg pos6:*, reg pos7:V, reg c24:L, reg pos9:V, reg dr30:V, reg dc15:L, reg dx30:V, reg dx31:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r164:V, reg pos12:V, reg r165:V, reg pos13:*, reg pos14:V, reg length1:cls, reg r166:V, reg r167:V, reg __10:cls, reg r168:V, reg r169:V, reg c25:cls, reg r170:V, reg p36:p(V +), reg pos15:*, reg pos16:V, reg p37:p(V +), reg r173:V, reg trimws:cls, reg vals:*, reg vals1:V, reg c26:L, reg vals3:V, reg dr32:V, reg dc16:L, reg dx32:V, reg dx33:V, reg fold2:*, reg fold3:V, reg __11:cls, reg r174:V, reg p38:p(V +), reg r176:V, reg l12:*, reg c27:L, reg r178:V, reg l14:*, reg dr34:V, reg dc17:L, reg dx34:V, reg dx35:V, reg fold4:*, reg fold5:V, reg ___4:cls, reg r181:V, reg l15:*, reg Encoding__:cls, reg r182:V, reg l16:*, reg Encoding__1:cls, reg r183:V, reg _assemble_things_into_a_data_frame:cls, reg tags2:*, reg tags3:V, reg p39:p(V +), reg vals4:*, reg vals5:V, reg p40:p(V +), reg nums6:*, reg nums7:V, reg c28:L, reg nums9:V, reg dr36:V, reg dc18:L, reg dx36:V, reg dx37:V, reg pos17:*, reg pos18:V, reg __12:cls, reg r186:V, reg p41:p(V +), reg r188:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r189:V, reg r190:V, reg fields3:*, reg fields4:V, reg c29:V, reg r191:V, reg c30:L, reg out:*, reg out1:V, reg c31:L, reg out3:V, reg dr38:V, reg dc19:L, reg dx38:V, reg dx39:V, reg fields5:*, reg fields6:V, reg __13:cls, reg r192:V, reg out4:*, reg out5:V |
    mkenv;
    st file = file;
    fields_isMissing = missing.0(fields);
    if fields_isMissing then L0(NULL) else L0(fields);
  L0(fields_orDefault):
    st fields = fields_orDefault;
    all_isMissing = missing.0(all);
    if all_isMissing then L1(FALSE) else L1(all);
  L1(all_orDefault):
    st all = all_orDefault;
    keep_white_isMissing = missing.0(keep_white);
    if keep_white_isMissing then L2(NULL) else L2(keep_white);
  L2(keep_white_orDefault):
    st `keep.white` = keep_white_orDefault;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L40() else L41();
  L3(r1):
    c1 = `as.logical`(r1);
    if c1 then L43() else L4();
  L40():
    file1 = ld file;
    check L42() else D0();
  L41():
    r = dyn base(<sym file>);
    goto L3(r);
  D0():
    deopt 1 [file1];
  L4():
    goto L6();
  L6():
    sym2 = ldf inherits;
    base2 = ldf inherits in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L49() else L50();
  L42():
    file2 = force? file1;
    checkMissing(file2);
    c = `is.character`(file2);
    goto L3(c);
  L43():
    gzfile = ldf gzfile;
    check L44() else D1();
  D1():
    deopt 5 [];
  L7(r9):
    r11 = `!`(r9);
    c2 = `as.logical`(r11);
    if c2 then L53() else L8();
  L44():
    p = prom<V +>{
      file3 = ld file;
      file4 = force? file3;
      checkMissing(file4);
      return file4;
    };
    r3 = dyn gzfile(p);
    check L45() else D2();
  L49():
    file5 = ld file;
    check L51() else D3();
  L50():
    r8 = dyn base2(<sym file>, "connection");
    goto L7(r8);
  D2():
    deopt 7 [r3];
  D3():
    deopt 16 [file5];
  L8():
    goto L9();
  L9():
    all1 = ld all;
    check L57() else D7();
  L45():
    st file = r3;
    sym1 = ldf `on.exit`;
    base1 = ldf `on.exit` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L46() else L47();
  L51():
    file6 = force? file5;
    checkMissing(file6);
    inherits = ldf inherits in base;
    r10 = dyn inherits(file6, "connection", FALSE);
    check L52() else D4();
  L53():
    stop = ldf stop;
    check L54() else D5();
  D4():
    deopt 21 [r10];
  D5():
    deopt 24 [];
  D7():
    deopt 29 [all1];
  L5(r5):
    goto L6();
  L46():
    on_exit = ldf `on.exit` in base;
    r6 = dyn on_exit(<lang close(file)>);
    goto L5(r6);
  L47():
    r4 = dyn base1(<lang close(file)>);
    goto L5(r4);
  L52():
    goto L7(r10);
  L54():
    r12 = dyn stop("'file' must be a character string or connection");
    check L55() else D6();
  L57():
    all2 = force? all1;
    checkMissing(all2);
    r14 = `!`(all2);
    c3 = `as.logical`(r14);
    if c3 then L58() else L10();
  D6():
    deopt 26 [r12];
  L10():
    r20 = clos inner507700544;
    st `.assemble_things_into_a_data_frame` = r20;
    st ascii_blank = " \t";
    st ascii_space = " \u000c\n\r\t\u000b";
    readLines = ldf readLines;
    check L67() else D12();
  L55():
    goto L9();
  L58():
    sym3 = ldf `.Internal`;
    base3 = ldf `.Internal` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L59() else L60();
  D12():
    deopt 55 [];
  L11(r16):
    popenv;
    return r16;
  L59():
    file7 = ld file;
    check L61() else D8();
  L60():
    r15 = dyn base3(<lang readDCF(file, fields, keep.white)>);
    goto L11(r15);
  L67():
    p1 = prom<V +>{
      file9 = ld file;
      file10 = force? file9;
      checkMissing(file10);
      return file10;
    };
    r22 = dyn readLines[, skipNul, encoding](p1, TRUE, "bytes");
    check L68() else D13();
  D8():
    deopt 34 [file7];
  D13():
    deopt 61 [r22];
  L61():
    file8 = force? file7;
    checkMissing(file8);
    fields1 = ld fields;
    check L62() else D9();
  L68():
    st lines = r22;
    grep = ldf grep;
    check L69() else D14();
  D9():
    deopt 36 [fields1];
  D14():
    deopt 64 [];
  L62():
    fields2 = force? fields1;
    checkMissing(fields2);
    keep_white1 = ld `keep.white`;
    check L63() else D10();
  L69():
    p3 = prom<V +>{
      paste0 = ldf paste0;
      p2 = prom<V +>{
        ascii_blank = ld ascii_blank;
        ascii_blank1 = force? ascii_blank;
        checkMissing(ascii_blank1);
        return ascii_blank1;
      };
      r24 = dyn paste0("^[^", p2, "][^:]*$");
      return r24;
    };
    p4 = prom<V +>{
      lines = ld lines;
      lines1 = force? lines;
      checkMissing(lines1);
      return lines1;
    };
    r27 = dyn grep(p3, p4);
    check L70() else D15();
  D10():
    deopt 38 [keep_white1];
  D15():
    deopt 67 [r27];
  L63():
    keep_white2 = force? keep_white1;
    checkMissing(keep_white2);
    readDCF = ldf readDCF in base;
    r17 = dyn readDCF(file8, fields2, keep_white2);
    check L64() else D11();
  L70():
    st ind = r27;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L71() else L72();
  D11():
    deopt 41 [r17];
  L13(r29):
    c4 = `as.logical`(r29);
    if c4 then L75() else L14();
  L64():
    goto L11(r17);
  L71():
    ind = ld ind;
    check L73() else D16();
  L72():
    r28 = dyn base4(<sym ind>);
    goto L13(r28);
  D16():
    deopt 71 [ind];
  L14():
    goto L15();
  L15():
    grepl = ldf grepl;
    check L81() else D22();
  L73():
    ind1 = force? ind;
    checkMissing(ind1);
    length = ldf length in base;
    r30 = dyn length(ind1);
    check L74() else D17();
  L75():
    substr = ldf substr;
    check L76() else D18();
  D17():
    deopt 74 [r30];
  D18():
    deopt 76 [];
  D22():
    deopt 91 [];
  L74():
    goto L13(r30);
  L76():
    p5 = prom<V +>{
      lines2 = ld lines;
      lines3 = force? lines2;
      checkMissing(lines3);
      c5 = `is.object`(lines3);
      if c5 then L1() else L2(lines3);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", lines3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(lines5):
      ind2 = ld ind;
      ind3 = force? ind2;
      __ = ldf `[` in base;
      r31 = dyn __(lines5, ind3);
      goto L0(r31);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p6 = prom<V +>{
      getOption = ldf getOption;
      r33 = dyn getOption("width");
      r34 = `*`(0.7, r33);
      return r34;
    };
    r36 = dyn substr(p5, 1, p6);
    check L77() else D19();
  L81():
    p11 = prom<V +>{
      paste2 = ldf paste0;
      p10 = prom<V +>{
        ascii_space = ld ascii_space;
        ascii_space1 = force? ascii_space;
        checkMissing(ascii_space1);
        return ascii_space1;
      };
      r45 = dyn paste2("^[", p10, "]*$");
      return r45;
    };
    p12 = prom<V +>{
      lines8 = ld lines;
      lines9 = force? lines8;
      checkMissing(lines9);
      return lines9;
    };
    r48 = dyn grepl(p11, p12);
    check L82() else D23();
  D19():
    deopt 80 [r36];
  D23():
    deopt 94 [r48];
  L77():
    st lines = r36;
    stop1 = ldf stop;
    check L78() else D20();
  L82():
    r49 = `!`(r48);
    st line_is_not_empty = r49;
    sym5 = ldf cumsum;
    base5 = ldf cumsum in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L83() else L84();
  D20():
    deopt 83 [];
  L16(r51):
    st nums = r51;
    nums = ld nums;
    check L88() else D27();
  L78():
    p9 = prom<V +>{
      gettextf = ldf gettextf;
      p8 = prom<V +>{
        paste1 = ldf paste0;
        p7 = prom<V +>{
          lines6 = ld lines;
          lines7 = force? lines6;
          checkMissing(lines7);
          return lines7;
        };
        r38 = dyn paste1[, , collapse]("  ", p7, "\n");
        return r38;
      };
      r40 = dyn gettextf("Invalid DCF format.\nRegular lines must have a tag.\nOffending lines start with:\n%s", p8);
      return r40;
    };
    r42 = dyn stop1[, domain](p9, NA_LGL);
    check L79() else D21();
  L83():
    diff = ldf diff;
    check L85() else D24();
  L84():
    r50 = dyn base5(<lang `>`(diff(`>`(c(FALSE, line_is_not_empty), 0)), 0)>);
    goto L16(r50);
  D21():
    deopt 87 [r42];
  D24():
    deopt 100 [];
  D27():
    deopt 108 [nums];
  L79():
    goto L15();
  L85():
    p13 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r53):
      r55 = `>`(r53, 0);
      return r55;
    L1():
      line_is_not_empty = ld line_is_not_empty;
      line_is_not_empty1 = force? line_is_not_empty;
      checkMissing(line_is_not_empty1);
      c6 = ldf c in base;
      r54 = dyn c6(FALSE, line_is_not_empty1);
      goto L0(r54);
    L2():
      r52 = dyn base6(FALSE, <sym line_is_not_empty>);
      goto L0(r52);
    };
    r57 = dyn diff(p13);
    check L86() else D25();
  L88():
    nums1 = force? nums;
    checkMissing(nums1);
    c7 = `is.object`(nums1);
    if c7 then L89() else L90(nums1);
  D25():
    deopt 102 [r57];
  L17(dx3):
    st nums = dx3;
    lines10 = ld lines;
    check L93() else D29();
  L86():
    r58 = `>`(r57, 0);
    cumsum = ldf cumsum in base;
    r59 = dyn cumsum(r58);
    check L87() else D26();
  L89():
    dr2 = tryDispatchBuiltin.1("[", nums1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L91() else L90(dr2);
  L90(nums3):
    line_is_not_empty2 = ld line_is_not_empty;
    check L92() else D28();
  D26():
    deopt 106 [r59];
  D28():
    deopt 110 [nums3, line_is_not_empty2];
  D29():
    deopt 114 [lines10];
  L87():
    goto L16(r59);
  L91():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L17(dx2);
  L92():
    line_is_not_empty3 = force? line_is_not_empty2;
    __1 = ldf `[` in base;
    r60 = dyn __1(nums3, line_is_not_empty3);
    goto L17(r60);
  L93():
    lines11 = force? lines10;
    checkMissing(lines11);
    c8 = `is.object`(lines11);
    if c8 then L94() else L95(lines11);
  L18(dx5):
    st lines = dx5;
    grepl1 = ldf grepl;
    check L98() else D31();
  L94():
    dr4 = tryDispatchBuiltin.1("[", lines11);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L96() else L95(dr4);
  L95(lines13):
    line_is_not_empty4 = ld line_is_not_empty;
    check L97() else D30();
  D30():
    deopt 116 [lines13, line_is_not_empty4];
  D31():
    deopt 121 [];
  L96():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L18(dx4);
  L97():
    line_is_not_empty5 = force? line_is_not_empty4;
    __2 = ldf `[` in base;
    r61 = dyn __2(lines13, line_is_not_empty5);
    goto L18(r61);
  L98():
    p16 = prom<V +>{
      paste3 = ldf paste0;
      p14 = prom<V +>{
        ascii_space2 = ld ascii_space;
        ascii_space3 = force? ascii_space2;
        checkMissing(ascii_space3);
        return ascii_space3;
      };
      p15 = prom<V +>{
        ascii_space4 = ld ascii_space;
        ascii_space5 = force? ascii_space4;
        checkMissing(ascii_space5);
        return ascii_space5;
      };
      r64 = dyn paste3("^[", p14, "]+\\.[", p15, "]*$");
      return r64;
    };
    p17 = prom<V +>{
      lines14 = ld lines;
      lines15 = force? lines14;
      checkMissing(lines15);
      return lines15;
    };
    r67 = dyn grepl1(p16, p17);
    check L99() else D32();
  D32():
    deopt 124 [r67];
  L99():
    st line_is_escaped_blank = r67;
    sym7 = ldf any;
    base7 = ldf any in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L100() else L101();
  L19(r69):
    c9 = `as.logical`(r69);
    if c9 then L104() else L20();
  L100():
    line_is_escaped_blank = ld line_is_escaped_blank;
    check L102() else D33();
  L101():
    r68 = dyn base7(<sym line_is_escaped_blank>);
    goto L19(r68);
  D33():
    deopt 128 [line_is_escaped_blank];
  L20():
    goto L22();
  L22():
    grepl2 = ldf grepl;
    check L110() else D36();
  L102():
    line_is_escaped_blank1 = force? line_is_escaped_blank;
    checkMissing(line_is_escaped_blank1);
    any = ldf any in base;
    r70 = dyn any(line_is_escaped_blank1);
    check L103() else D34();
  L104():
    l = ld lines;
    c10 = `is.object`(l);
    if c10 then L105() else L106("", l);
  D34():
    deopt 131 [r70];
  D36():
    deopt 142 [];
  L21(r74, dx7):
    st lines = dx7;
    goto L22();
  L103():
    goto L19(r70);
  L105():
    dr6 = tryDispatchBuiltin.0("[<-", l, "");
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L107() else L106("", dr6);
  L106(r72, l2):
    line_is_escaped_blank2 = ld line_is_escaped_blank;
    check L108() else D35();
  L110():
    p19 = prom<V +>{
      paste4 = ldf paste0;
      p18 = prom<V +>{
        ascii_blank2 = ld ascii_blank;
        ascii_blank3 = force? ascii_blank2;
        checkMissing(ascii_blank3);
        return ascii_blank3;
      };
      r78 = dyn paste4("^[^", p18, "][^:]*:");
      return r78;
    };
    p20 = prom<V +>{
      lines16 = ld lines;
      lines17 = force? lines16;
      checkMissing(lines17);
      return lines17;
    };
    r81 = dyn grepl2(p19, p20);
    check L111() else D37();
  D35():
    deopt 135 [r72, l2, "", line_is_escaped_blank2];
  D37():
    deopt 145 [r81];
  L107():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L21("", dx6);
  L108():
    line_is_escaped_blank3 = force? line_is_escaped_blank2;
    ___ = ldf `[<-` in base;
    r75 = dyn ___(l2, "", line_is_escaped_blank3);
    goto L21(r72, r75);
  L111():
    st line_has_tag = r81;
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L112() else L113();
  L23(r83):
    st pos = r83;
    line_has_tag = ld line_has_tag;
    check L117() else D41();
  L112():
    which = ldf which;
    check L114() else D38();
  L113():
    r82 = dyn base8(1, <lang `+`(which(`>`(diff(nums), 0)), 1)>);
    goto L23(r82);
  D38():
    deopt 151 [];
  D41():
    deopt 159 [line_has_tag];
  L114():
    p22 = prom<V +>{
      diff1 = ldf diff;
      p21 = prom<V +>{
        nums4 = ld nums;
        nums5 = force? nums4;
        checkMissing(nums5);
        return nums5;
      };
      r85 = dyn diff1(p21);
      r86 = `>`(r85, 0);
      return r86;
    };
    r88 = dyn which(p22);
    check L115() else D39();
  L117():
    line_has_tag1 = force? line_has_tag;
    checkMissing(line_has_tag1);
    c12 = `is.object`(line_has_tag1);
    if c12 then L118() else L119(line_has_tag1);
  D39():
    deopt 153 [r88];
  L24(dx9):
    r92 = `!`(dx9);
    st ind = r92;
    sym9 = ldf any;
    base9 = ldf any in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L122() else L123();
  L115():
    r89 = `+`(r88, 1);
    c11 = ldf c in base;
    r90 = dyn c11(1, r89);
    check L116() else D40();
  L118():
    dr8 = tryDispatchBuiltin.1("[", line_has_tag1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L120() else L119(dr8);
  L119(line_has_tag3):
    pos = ld pos;
    check L121() else D42();
  D40():
    deopt 157 [r90];
  D42():
    deopt 161 [line_has_tag3, pos];
  L25(r94):
    c13 = `as.logical`(r94);
    if c13 then L126() else L26();
  L116():
    goto L23(r90);
  L120():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L24(dx8);
  L121():
    pos1 = force? pos;
    __3 = ldf `[` in base;
    r91 = dyn __3(line_has_tag3, pos1);
    goto L24(r91);
  L122():
    ind4 = ld ind;
    check L124() else D43();
  L123():
    r93 = dyn base9(<sym ind>);
    goto L25(r93);
  D43():
    deopt 168 [ind4];
  L26():
    goto L27();
  L27():
    rle = ldf rle;
    check L132() else D49();
  L124():
    ind5 = force? ind4;
    checkMissing(ind5);
    any1 = ldf any in base;
    r95 = dyn any1(ind5);
    check L125() else D44();
  L126():
    substr1 = ldf substr;
    check L127() else D45();
  D44():
    deopt 171 [r95];
  D45():
    deopt 173 [];
  D49():
    deopt 188 [];
  L125():
    goto L25(r95);
  L127():
    p23 = prom<V +>{
      lines18 = ld lines;
      lines19 = force? lines18;
      checkMissing(lines19);
      c14 = `is.object`(lines19);
      if c14 then L2() else L3(lines19);
    L0(dx11):
      return dx11;
    L2():
      dr10 = tryDispatchBuiltin.1("[", lines19);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L4() else L3(dr10);
    L3(lines21):
      pos2 = ld pos;
      pos3 = force? pos2;
      checkMissing(pos3);
      c15 = `is.object`(pos3);
      if c15 then L5() else L6(lines21, pos3);
    L1(lines25, dx13):
      __5 = ldf `[` in base;
      r97 = dyn __5(lines25, dx13);
      goto L0(r97);
    L4():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    L5():
      dr12 = tryDispatchBuiltin.1("[", pos3);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L7() else L6(lines21, dr12);
    L6(lines23, pos5):
      ind6 = ld ind;
      ind7 = force? ind6;
      __4 = ldf `[` in base;
      r96 = dyn __4(pos5, ind7);
      goto L1(lines23, r96);
    L7():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L1(lines21, dx12);
    };
    p24 = prom<V +>{
      getOption1 = ldf getOption;
      r99 = dyn getOption1("width");
      r100 = `*`(0.7, r99);
      return r100;
    };
    r102 = dyn substr1(p23, 1, p24);
    check L128() else D46();
  L132():
    p28 = prom<V +>{
      sym10 = ldf cumsum;
      base10 = ldf cumsum in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r111):
      return r111;
    L1():
      line_has_tag4 = ld line_has_tag;
      line_has_tag5 = force? line_has_tag4;
      checkMissing(line_has_tag5);
      cumsum1 = ldf cumsum in base;
      r112 = dyn cumsum1(line_has_tag5);
      goto L0(r112);
    L2():
      r110 = dyn base10(<sym line_has_tag>);
      goto L0(r110);
    };
    r114 = dyn rle(p28);
    check L133() else D50();
  D46():
    deopt 177 [r102];
  D50():
    deopt 190 [r114];
  L128():
    st lines = r102;
    stop2 = ldf stop;
    check L129() else D47();
  L133():
    c16 = `is.object`(r114);
    if c16 then L135() else L136(r114);
  D47():
    deopt 180 [];
  L129():
    p27 = prom<V +>{
      gettextf1 = ldf gettextf;
      p26 = prom<V +>{
        paste5 = ldf paste0;
        p25 = prom<V +>{
          lines26 = ld lines;
          lines27 = force? lines26;
          checkMissing(lines27);
          return lines27;
        };
        r104 = dyn paste5[, , collapse]("  ", p25, "\n");
        return r104;
      };
      r106 = dyn gettextf1("Invalid DCF format.\nContinuation lines must not start a record.\nOffending lines start with:\n%s", p26);
      return r106;
    };
    r108 = dyn stop2[, domain](p27, NA_LGL);
    check L130() else D48();
  L134(dx15):
    st lengths = dx15;
    sym11 = ldf cumsum;
    base11 = ldf cumsum in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L138() else L139();
  L135():
    dr14 = tryDispatchBuiltin.1("$", r114);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L137() else L136(dr14);
  L136(r116):
    r117 = `$`(r116, <sym lengths>);
    goto L134(r117);
  D48():
    deopt 184 [r108];
  L28(r119):
    st pos = r119;
    sub = ldf sub;
    check L142() else D53();
  L130():
    goto L27();
  L137():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L134(dx14);
  L138():
    lengths = ld lengths;
    check L140() else D51();
  L139():
    r118 = dyn base11(<sym lengths>);
    goto L28(r118);
  D51():
    deopt 195 [lengths];
  D53():
    deopt 201 [];
  L140():
    lengths1 = force? lengths;
    checkMissing(lengths1);
    cumsum2 = ldf cumsum in base;
    r120 = dyn cumsum2(lengths1);
    check L141() else D52();
  L142():
    p29 = prom<V +>{
      lines28 = ld lines;
      lines29 = force? lines28;
      checkMissing(lines29);
      c17 = `is.object`(lines29);
      if c17 then L1() else L2(lines29);
    L0(dx17):
      return dx17;
    L1():
      dr16 = tryDispatchBuiltin.1("[", lines29);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(lines31):
      line_has_tag6 = ld line_has_tag;
      line_has_tag7 = force? line_has_tag6;
      __6 = ldf `[` in base;
      r121 = dyn __6(lines31, line_has_tag7);
      goto L0(r121);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    r123 = dyn sub(":.*", "", p29);
    check L143() else D54();
  D52():
    deopt 198 [r120];
  D54():
    deopt 205 [r123];
  L141():
    goto L28(r120);
  L143():
    st tags = r123;
    sub1 = ldf sub;
    check L144() else D55();
  D55():
    deopt 208 [];
  L144():
    p31 = prom<V +>{
      paste6 = ldf paste0;
      p30 = prom<V +>{
        ascii_space6 = ld ascii_space;
        ascii_space7 = force? ascii_space6;
        checkMissing(ascii_space7);
        return ascii_space7;
      };
      r125 = dyn paste6("[^:]*:[", p30, "]*");
      return r125;
    };
    p32 = prom<V +>{
      lines32 = ld lines;
      lines33 = force? lines32;
      checkMissing(lines33);
      c18 = `is.object`(lines33);
      if c18 then L1() else L2(lines33);
    L0(dx19):
      return dx19;
    L1():
      dr18 = tryDispatchBuiltin.1("[", lines33);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(lines35):
      line_has_tag8 = ld line_has_tag;
      line_has_tag9 = force? line_has_tag8;
      __7 = ldf `[` in base;
      r127 = dyn __7(lines35, line_has_tag9);
      goto L0(r127);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx18);
    };
    r129 = dyn sub1(p31, "", p32);
    check L145() else D56();
  D56():
    deopt 212 [r129];
  L145():
    l3 = ld lines;
    c19 = `is.object`(l3);
    if c19 then L146() else L147(r129, l3);
  L29(dx21):
    st lines = dx21;
    sym12 = ldf `is.na`;
    base12 = ldf `is.na` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L150() else L151();
  L146():
    dr20 = tryDispatchBuiltin.0("[<-", l3, r129);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L148() else L147(r129, dr20);
  L147(r131, l5):
    line_has_tag10 = ld line_has_tag;
    check L149() else D57();
  D57():
    deopt 214 [r131, l5, r129, line_has_tag10];
  L30(r136):
    st fold = r136;
    sym14 = ldf `rep.int`;
    base14 = ldf `rep.int` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L158() else L159();
  L148():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L29(dx20);
  L149():
    line_has_tag11 = force? line_has_tag10;
    ___1 = ldf `[<-` in base;
    r134 = dyn ___1(l5, r129, line_has_tag11);
    goto L29(r134);
  L150():
    sym13 = ldf match;
    base13 = ldf match in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L152() else L153();
  L151():
    r135 = dyn base12(<lang match(tags, keep.white)>);
    goto L30(r135);
  L31(r138):
    is_na = ldf `is.na` in base;
    r140 = dyn is_na(r138);
    check L157() else D61();
  L32(r142):
    st foldable = r142;
    sub2 = ldf sub;
    check L163() else D65();
  L152():
    tags = ld tags;
    check L154() else D58();
  L153():
    r137 = dyn base13(<sym tags>, <sym keep.white>);
    goto L31(r137);
  L158():
    fold = ld fold;
    check L160() else D62();
  L159():
    r141 = dyn base14(<sym fold>, <sym lengths>);
    goto L32(r141);
  D58():
    deopt 222 [tags];
  D61():
    deopt 231 [r140];
  D62():
    deopt 235 [fold];
  D65():
    deopt 243 [];
  L154():
    tags1 = force? tags;
    checkMissing(tags1);
    keep_white3 = ld `keep.white`;
    check L155() else D59();
  L157():
    goto L30(r140);
  L160():
    fold1 = force? fold;
    checkMissing(fold1);
    lengths2 = ld lengths;
    check L161() else D63();
  L163():
    p33 = prom<V +>{
      lines36 = ld lines;
      lines37 = force? lines36;
      checkMissing(lines37);
      c20 = `is.object`(lines37);
      if c20 then L1() else L2(lines37);
    L0(dx23):
      return dx23;
    L1():
      dr22 = tryDispatchBuiltin.1("[", lines37);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2(dr22);
    L2(lines39):
      foldable = ld foldable;
      foldable1 = force? foldable;
      __8 = ldf `[` in base;
      r144 = dyn __8(lines39, foldable1);
      goto L0(r144);
    L3():
      dx22 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx22);
    };
    r146 = dyn sub2("^[[:space:]]*", "", p33);
    check L164() else D66();
  D59():
    deopt 224 [keep_white3];
  D63():
    deopt 237 [lengths2];
  D66():
    deopt 247 [r146];
  L155():
    keep_white4 = force? keep_white3;
    checkMissing(keep_white4);
    match = ldf match in base;
    r139 = dyn match(tags1, keep_white4, NA_INT, NULL);
    check L156() else D60();
  L161():
    lengths3 = force? lengths2;
    checkMissing(lengths3);
    rep_int = ldf `rep.int` in base;
    r143 = dyn rep_int(fold1, lengths3);
    check L162() else D64();
  L164():
    l6 = ld lines;
    c21 = `is.object`(l6);
    if c21 then L165() else L166(r146, l6);
  D60():
    deopt 229 [r139];
  D64():
    deopt 240 [r143];
  L33(dx25):
    st lines = dx25;
    sub3 = ldf sub;
    check L169() else D68();
  L156():
    goto L31(r139);
  L162():
    goto L32(r143);
  L165():
    dr24 = tryDispatchBuiltin.0("[<-", l6, r146);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L167() else L166(r146, dr24);
  L166(r148, l8):
    foldable2 = ld foldable;
    check L168() else D67();
  D67():
    deopt 249 [r148, l8, r146, foldable2];
  D68():
    deopt 254 [];
  L167():
    dx24 = getTryDispatchBuiltinValue(dr24);
    goto L33(dx24);
  L168():
    foldable3 = force? foldable2;
    ___2 = ldf `[<-` in base;
    r151 = dyn ___2(l8, r146, foldable3);
    goto L33(r151);
  L169():
    p34 = prom<V +>{
      lines40 = ld lines;
      lines41 = force? lines40;
      checkMissing(lines41);
      c22 = `is.object`(lines41);
      if c22 then L1() else L2(lines41);
    L0(dx27):
      return dx27;
    L1():
      dr26 = tryDispatchBuiltin.1("[", lines41);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L3() else L2(dr26);
    L2(lines43):
      foldable4 = ld foldable;
      foldable5 = force? foldable4;
      __9 = ldf `[` in base;
      r152 = dyn __9(lines43, foldable5);
      goto L0(r152);
    L3():
      dx26 = getTryDispatchBuiltinValue(dr26);
      goto L0(dx26);
    };
    r154 = dyn sub3("[[:space:]]*$", "", p34);
    check L170() else D69();
  D69():
    deopt 258 [r154];
  L170():
    l9 = ld lines;
    c23 = `is.object`(l9);
    if c23 then L171() else L172(r154, l9);
  L34(dx29):
    st lines = dx29;
    mapply = ldf mapply;
    check L175() else D71();
  L171():
    dr28 = tryDispatchBuiltin.0("[<-", l9, r154);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L173() else L172(r154, dr28);
  L172(r156, l11):
    foldable6 = ld foldable;
    check L174() else D70();
  D70():
    deopt 260 [r156, l11, r154, foldable6];
  D71():
    deopt 265 [];
  L173():
    dx28 = getTryDispatchBuiltinValue(dr28);
    goto L34(dx28);
  L174():
    foldable7 = force? foldable6;
    ___3 = ldf `[<-` in base;
    r159 = dyn ___3(l11, r154, foldable7);
    goto L34(r159);
  L175():
    p35 = prom<V +>{
      r160 = clos inner838351097;
      return r160;
    };
    p36 = prom<V +>{
      sym15 = ldf c;
      base15 = ldf c in base;
      guard15 = `==`.4(sym15, base15);
      if guard15 then L3() else L4();
    L0(r163):
      return r163;
    L3():
      pos6 = ld pos;
      pos7 = force? pos6;
      checkMissing(pos7);
      c24 = `is.object`(pos7);
      if c24 then L5() else L6(pos7);
    L4():
      r162 = dyn base15(1, <lang `+`(`[`(pos, `-`(length(pos))), 1)>);
      goto L0(r162);
    L1(dx31):
      r169 = `+`(dx31, 1);
      c25 = ldf c in base;
      r170 = dyn c25(1, r169);
      goto L0(r170);
    L5():
      dr30 = tryDispatchBuiltin.1("[", pos7);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L7() else L6(dr30);
    L6(pos9):
      sym16 = ldf length;
      base16 = ldf length in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L8() else L9();
    L2(pos12, r165):
      r167 = `-`(<missing>, r165);
      __10 = ldf `[` in base;
      r168 = dyn __10(pos12, r167);
      goto L1(r168);
    L7():
      dx30 = getTryDispatchBuiltinValue(dr30);
      goto L1(dx30);
    L8():
      pos13 = ld pos;
      pos14 = force? pos13;
      checkMissing(pos14);
      length1 = ldf length in base;
      r166 = dyn length1(pos14);
      goto L2(pos9, r166);
    L9():
      r164 = dyn base16(<sym pos>);
      goto L2(pos9, r164);
    };
    p37 = prom<V +>{
      pos15 = ld pos;
      pos16 = force? pos15;
      checkMissing(pos16);
      return pos16;
    };
    r173 = dyn mapply(p35, p36, p37);
    check L176() else D72();
  D72():
    deopt 269 [r173];
  L176():
    st vals = r173;
    trimws = ldf trimws;
    check L177() else D73();
  D73():
    deopt 272 [];
  L177():
    p38 = prom<V +>{
      vals = ld vals;
      vals1 = force? vals;
      checkMissing(vals1);
      c26 = `is.object`(vals1);
      if c26 then L1() else L2(vals1);
    L0(dx33):
      return dx33;
    L1():
      dr32 = tryDispatchBuiltin.1("[", vals1);
      dc16 = getTryDispatchBuiltinDispatched(dr32);
      if dc16 then L3() else L2(dr32);
    L2(vals3):
      fold2 = ld fold;
      fold3 = force? fold2;
      __11 = ldf `[` in base;
      r174 = dyn __11(vals3, fold3);
      goto L0(r174);
    L3():
      dx32 = getTryDispatchBuiltinValue(dr32);
      goto L0(dx32);
    };
    r176 = dyn trimws(p38);
    check L178() else D74();
  D74():
    deopt 274 [r176];
  L178():
    l12 = ld vals;
    c27 = `is.object`(l12);
    if c27 then L179() else L180(r176, l12);
  L35(dx35):
    st vals = dx35;
    l15 = ld vals;
    Encoding__ = ldf `Encoding<-`;
    check L183() else D76();
  L179():
    dr34 = tryDispatchBuiltin.0("[<-", l12, r176);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L181() else L180(r176, dr34);
  L180(r178, l14):
    fold4 = ld fold;
    check L182() else D75();
  D75():
    deopt 276 [r178, l14, r176, fold4];
  D76():
    deopt 283 ["unknown", l15, "unknown"];
  L181():
    dx34 = getTryDispatchBuiltinValue(dr34);
    goto L35(dx34);
  L182():
    fold5 = force? fold4;
    ___4 = ldf `[<-` in base;
    r181 = dyn ___4(l14, r176, fold5);
    goto L35(r181);
  L183():
    r182 = dyn Encoding__(l15, NULL, "unknown");
    check L184() else D77();
  D77():
    deopt 285 ["unknown", r182];
  L184():
    st vals = r182;
    l16 = ld tags;
    Encoding__1 = ldf `Encoding<-`;
    check L185() else D78();
  D78():
    deopt 290 ["unknown", l16, "unknown"];
  L185():
    r183 = dyn Encoding__1(l16, NULL, "unknown");
    check L186() else D79();
  D79():
    deopt 292 ["unknown", r183];
  L186():
    st tags = r183;
    _assemble_things_into_a_data_frame = ldf `.assemble_things_into_a_data_frame`;
    check L187() else D80();
  D80():
    deopt 295 [];
  L187():
    p39 = prom<V +>{
      tags2 = ld tags;
      tags3 = force? tags2;
      checkMissing(tags3);
      return tags3;
    };
    p40 = prom<V +>{
      vals4 = ld vals;
      vals5 = force? vals4;
      checkMissing(vals5);
      return vals5;
    };
    p41 = prom<V +>{
      nums6 = ld nums;
      nums7 = force? nums6;
      checkMissing(nums7);
      c28 = `is.object`(nums7);
      if c28 then L1() else L2(nums7);
    L0(dx37):
      return dx37;
    L1():
      dr36 = tryDispatchBuiltin.1("[", nums7);
      dc18 = getTryDispatchBuiltinDispatched(dr36);
      if dc18 then L3() else L2(dr36);
    L2(nums9):
      pos17 = ld pos;
      pos18 = force? pos17;
      __12 = ldf `[` in base;
      r186 = dyn __12(nums9, pos18);
      goto L0(r186);
    L3():
      dx36 = getTryDispatchBuiltinValue(dr36);
      goto L0(dx36);
    };
    r188 = dyn _assemble_things_into_a_data_frame(p39, p40, p41);
    check L188() else D81();
  D81():
    deopt 299 [r188];
  L188():
    st out = r188;
    sym17 = ldf `is.null`;
    base17 = ldf `is.null` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L189() else L190();
  L36(r190):
    r191 = `!`(r190);
    c30 = `as.logical`(r191);
    if c30 then L192() else L37();
  L189():
    fields3 = ld fields;
    check L191() else D82();
  L190():
    r189 = dyn base17(<sym fields>);
    goto L36(r189);
  D82():
    deopt 302 [fields3];
  L37():
    goto L39();
  L39():
    out4 = ld out;
    check L199() else D85();
  L191():
    fields4 = force? fields3;
    checkMissing(fields4);
    c29 = `==`(fields4, NULL);
    goto L36(c29);
  L192():
    out = ld out;
    check L193() else D83();
  D83():
    deopt 306 [out];
  D85():
    deopt 314 [out4];
  L193():
    out1 = force? out;
    checkMissing(out1);
    c31 = `is.object`(out1);
    if c31 then L194() else L195(out1);
  L199():
    out5 = force? out4;
    checkMissing(out5);
    popenv;
    return out5;
  L38(dx39):
    st out = dx39;
    goto L39();
  L194():
    dr38 = tryDispatchBuiltin.1("[", out1);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L196() else L195(dr38);
  L195(out3):
    fields5 = ld fields;
    check L197() else D84();
  D84():
    deopt 308 [out3, fields5];
  L196():
    dx38 = getTryDispatchBuiltinValue(dr38);
    goto L38(dx38);
  L197():
    fields6 = force? fields5;
    __13 = ldf `[` in base;
    r192 = dyn __13(out3, fields6);
    goto L38(r192);
  }
}
fun inner507700544(tags, vals, nums) {
  (reg tags:*, reg vals:*, reg nums:*) -+> V { var tags:*, var vals:*, var nums:*, reg factor:cls, reg tags1:*, reg tags2:V, reg p:p(V +), reg unique:cls, reg tags3:*, reg tags4:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), reg r4:V, reg table:cls, reg nums1:*, reg nums2:V, reg p3:p(V +), reg tf:*, reg tf1:V, reg p4:p(V +), reg r7:V, reg array:cls, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg cnts:*, reg cnts1:V, reg dim:cls, reg r10:V, reg p5:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg levels:cls, reg tf2:*, reg tf3:V, reg p6:p(V +), reg r15:V, reg list:cls, reg r16:V, reg p7:p(V +), reg r18:V, reg all:cls, reg cnts2:*, reg cnts3:V, reg r19:V, reg p8:p(V +), reg r21:V, reg c:L, reg vals1:*, reg vals2:V, reg l:*, reg c1:L, reg vals4:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg cbind:cls, reg nums3:*, reg nums4:V, reg p9:p(V +), reg tf4:*, reg tf5:V, reg p10:p(V +), reg r24:V, reg ___:cls, reg r25:V, reg as_data_frame:cls, reg out:*, reg out1:V, reg p11:p(V +), reg r27:V, reg colSums:cls, reg cnts4:*, reg cnts5:V, reg r29:V, reg p12:p(V +), reg r31:V, reg r32:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r33:V, reg r34:V, reg levs:*, reg levs1:V, reg any:cls, reg r35:V, reg c2:L, reg _in_:cls, reg tf6:*, reg tf7:V, reg p13:p(V +), reg levels1:cls, reg tf8:*, reg tf9:V, reg p14:p(V +), reg r38:V, reg c3:L, reg r40:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg levs2:*, reg levs3:V, reg __:cls, reg r41:V, reg p15:p(V +), reg r43:V, reg vals7:*, reg vals8:V, reg c4:L, reg vals10:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg inds:*, reg inds1:V, reg __1:cls, reg r44:V, reg l3:*, reg c5:L, reg dx7:V, reg l5:*, reg dr6:V, reg dc3:L, reg dx9:V, reg dx10:V, reg dx11:V, reg cbind1:cls, reg nums5:*, reg nums6:V, reg c6:L, reg nums8:V, reg dr8:V, reg dc4:L, reg dx12:V, reg dx13:V, reg inds2:*, reg inds3:V, reg __2:cls, reg r45:V, reg p16:p(V +), reg tf10:*, reg tf11:V, reg c7:L, reg tf13:V, reg dr10:V, reg dc5:L, reg dx14:V, reg dx15:V, reg inds4:*, reg inds5:V, reg __3:cls, reg r47:V, reg p17:p(V +), reg r49:V, reg ___1:cls, reg r50:V, reg as_data_frame1:cls, reg out2:*, reg out3:V, reg p18:p(V +), reg r52:V, reg levels2:cls, reg tf14:*, reg tf15:V, reg p19:p(V +), reg r54:V, reg c8:L, reg r56:V, reg dr12:V, reg dc6:L, reg dx17:V, reg dx18:V, reg levs4:*, reg levs5:V, reg r57:V, reg __4:cls, reg r58:V, reg s:V, reg l6:I, reg i:I, reg i1:I, reg i2:I, reg c9:L, reg x:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r59:V, reg i7:I, reg r60:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r61:V, reg i10:I, reg r62:V, reg list1:cls, reg r63:V, reg nrow:cls, reg cnts6:*, reg cnts7:V, reg p20:p(V +), reg r65:V, reg rep_int:cls, reg r66:V, reg l7:*, reg c10:L, reg i12:I, reg r68:V, reg l9:*, reg dr14:V, reg dc7:L, reg dx19:V, reg i14:I, reg dx20:V, reg l10:*, reg l11:V, reg ____:cls, reg r71:V, reg tf16:*, reg tf17:V, reg l12:*, reg l13:V, reg r72:V, reg split:cls, reg vals11:*, reg vals12:V, reg c11:L, reg vals14:V, reg dr16:V, reg dc8:L, reg dx21:V, reg dx22:V, reg i15:*, reg i16:V, reg __5:cls, reg r73:V, reg p21:p(V +), reg nums9:*, reg nums10:V, reg c12:L, reg nums12:V, reg dr18:V, reg dc9:L, reg dx23:V, reg dx24:V, reg i17:*, reg i18:V, reg __6:cls, reg r75:V, reg p22:p(V +), reg r77:V, reg l14:*, reg c13:L, reg i20:I, reg r80:V, reg l17:*, reg r81:V, reg l18:*, reg dr20:V, reg dc10:L, reg dx25:V, reg i22:I, reg r84:V, reg l20:*, reg r85:V, reg dx26:V, reg l21:*, reg l22:V, reg __7:cls, reg r86:V, reg c14:L, reg i24:I, reg r88:V, reg l24:*, reg dx28:V, reg dr22:V, reg dc11:L, reg dx29:V, reg i26:I, reg r90:V, reg l26:*, reg dx30:V, reg unique1:cls, reg nums13:*, reg nums14:V, reg c15:L, reg nums16:V, reg dr24:V, reg dc12:L, reg dx31:V, reg dx32:V, reg i27:*, reg i28:V, reg __8:cls, reg r91:V, reg p23:p(V +), reg r93:V, reg ___2:cls, reg r94:V, reg c16:L, reg i30:I, reg r96:V, reg l28:*, reg dr26:V, reg dc13:L, reg dx33:V, reg i32:I, reg dx34:V, reg l29:*, reg l30:V, reg ____1:cls, reg r99:V, reg out4:*, reg out5:V |
    mkenv;
    st tags = tags;
    st vals = vals;
    st nums = nums;
    factor = ldf factor;
    check L17() else D0();
  D0():
    deopt 1 [];
  L17():
    p = prom<V +>{
      tags1 = ld tags;
      tags2 = force? tags1;
      checkMissing(tags2);
      return tags2;
    };
    p2 = prom<V +>{
      unique = ldf unique;
      p1 = prom<V +>{
        tags3 = ld tags;
        tags4 = force? tags3;
        checkMissing(tags4);
        return tags4;
      };
      r2 = dyn unique(p1);
      return r2;
    };
    r4 = dyn factor[, levels](p, p2);
    check L18() else D1();
  D1():
    deopt 5 [r4];
  L18():
    st tf = r4;
    table = ldf table;
    check L19() else D2();
  D2():
    deopt 8 [];
  L19():
    p3 = prom<V +>{
      nums1 = ld nums;
      nums2 = force? nums1;
      checkMissing(nums2);
      return nums2;
    };
    p4 = prom<V +>{
      tf = ld tf;
      tf1 = force? tf;
      checkMissing(tf1);
      return tf1;
    };
    r7 = dyn table(p3, p4);
    check L20() else D3();
  D3():
    deopt 11 [r7];
  L20():
    st cnts = r7;
    array = ldf array;
    check L21() else D4();
  D4():
    deopt 14 [];
  L21():
    p5 = prom<V +>{
      sym = ldf dim;
      base = ldf dim in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r9):
      return r9;
    L1():
      cnts = ld cnts;
      cnts1 = force? cnts;
      checkMissing(cnts1);
      dim = ldf dim in base;
      r10 = dyn dim(cnts1);
      goto L0(r10);
    L2():
      r8 = dyn base(<sym cnts>);
      goto L0(r8);
    };
    p7 = prom<V +>{
      sym1 = ldf list;
      base1 = ldf list in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r13):
      return r13;
    L1():
      levels = ldf levels;
      p6 = prom<V +>{
        tf2 = ld tf;
        tf3 = force? tf2;
        checkMissing(tf3);
        return tf3;
      };
      r15 = dyn levels(p6);
      list = ldf list in base;
      r16 = dyn list(NULL, r15);
      goto L0(r16);
    L2():
      r12 = dyn base1(NULL, <lang levels(tf)>);
      goto L0(r12);
    };
    r18 = dyn array[, dim, dimnames](NA_STR, p5, p7);
    check L22() else D5();
  D5():
    deopt 20 [r18];
  L22():
    st out = r18;
    all = ldf all;
    check L23() else D6();
  D6():
    deopt 23 [];
  L23():
    p8 = prom<V +>{
      cnts2 = ld cnts;
      cnts3 = force? cnts2;
      checkMissing(cnts3);
      r19 = `<=`(cnts3, 1);
      return r19;
    };
    r21 = dyn all(p8);
    check L24() else D7();
  D7():
    deopt 25 [r21];
  L24():
    c = `as.logical`(r21);
    if c then L25() else L0();
  L0():
    colSums = ldf colSums;
    check L35() else D13();
  L2():
    out4 = ld out;
    check L93() else D41();
  L25():
    vals1 = ld vals;
    check L26() else D8();
  D8():
    deopt 26 [vals1];
  D13():
    deopt 46 [];
  D41():
    deopt 142 [out4];
  L26():
    vals2 = force? vals1;
    checkMissing(vals2);
    l = ld out;
    c1 = `is.object`(l);
    if c1 then L27() else L28(vals2, l);
  L35():
    p12 = prom<V +>{
      cnts4 = ld cnts;
      cnts5 = force? cnts4;
      checkMissing(cnts5);
      r29 = `>`(cnts5, 1);
      return r29;
    };
    r31 = dyn colSums(p12);
    check L36() else D14();
  L93():
    out5 = force? out4;
    checkMissing(out5);
    popenv;
    return out5;
  D14():
    deopt 48 [r31];
  L1(dx1):
    st out = dx1;
    as_data_frame = ldf `as.data.frame`;
    check L32() else D11();
  L27():
    dr = tryDispatchBuiltin.0("[<-", l, vals2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L29() else L28(vals2, dr);
  L28(vals4, l2):
    cbind = ldf cbind;
    check L30() else D9();
  L36():
    r32 = `==`(r31, 0);
    st levs = r32;
    sym2 = ldf any;
    base2 = ldf any in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L37() else L38();
  D9():
    deopt 30 [vals4, l2, vals2];
  D11():
    deopt 37 [];
  L3(r34):
    c2 = `as.logical`(r34);
    if c2 then L41() else L4();
  L29():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L30():
    p9 = prom<V +>{
      nums3 = ld nums;
      nums4 = force? nums3;
      checkMissing(nums4);
      return nums4;
    };
    p10 = prom<V +>{
      tf4 = ld tf;
      tf5 = force? tf4;
      checkMissing(tf5);
      return tf5;
    };
    r24 = dyn cbind(p9, p10);
    check L31() else D10();
  L32():
    p11 = prom<V +>{
      out = ld out;
      out1 = force? out;
      checkMissing(out1);
      return out1;
    };
    r27 = dyn as_data_frame[, optional, stringsAsFactors](p11, TRUE, FALSE);
    check L33() else D12();
  L37():
    levs = ld levs;
    check L39() else D15();
  L38():
    r33 = dyn base2(<sym levs>);
    goto L3(r33);
  D10():
    deopt 33 [vals4, l2, vals2, r24];
  D12():
    deopt 43 [r27];
  D15():
    deopt 54 [levs];
  L4():
    goto L7();
  L7():
    as_data_frame1 = ldf `as.data.frame`;
    check L55() else D23();
  L31():
    ___ = ldf `[<-` in base;
    r25 = dyn ___(l2, vals2, r24);
    goto L1(r25);
  L33():
    st out = r27;
    goto L2();
  L39():
    levs1 = force? levs;
    checkMissing(levs1);
    any = ldf any in base;
    r35 = dyn any(levs1);
    check L40() else D16();
  L41():
    _in_ = ldf `%in%`;
    check L42() else D17();
  D16():
    deopt 57 [r35];
  D17():
    deopt 59 [];
  D23():
    deopt 80 [];
  L40():
    goto L3(r35);
  L42():
    p13 = prom<V +>{
      tf6 = ld tf;
      tf7 = force? tf6;
      checkMissing(tf7);
      return tf7;
    };
    p15 = prom<V +>{
      levels1 = ldf levels;
      p14 = prom<V +>{
        tf8 = ld tf;
        tf9 = force? tf8;
        checkMissing(tf9);
        return tf9;
      };
      r38 = dyn levels1(p14);
      c3 = `is.object`(r38);
      if c3 then L1() else L2(r38);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", r38);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(r40):
      levs2 = ld levs;
      levs3 = force? levs2;
      __ = ldf `[` in base;
      r41 = dyn __(r40, levs3);
      goto L0(r41);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r43 = dyn _in_(p13, p15);
    check L43() else D18();
  L55():
    p18 = prom<V +>{
      out2 = ld out;
      out3 = force? out2;
      checkMissing(out3);
      return out3;
    };
    r52 = dyn as_data_frame1[, optional, stringsAsFactors](p18, TRUE, FALSE);
    check L56() else D24();
  D18():
    deopt 62 [r43];
  D24():
    deopt 86 [r52];
  L43():
    st inds = r43;
    vals7 = ld vals;
    check L44() else D19();
  L56():
    st out = r52;
    levels2 = ldf levels;
    check L57() else D25();
  D19():
    deopt 64 [vals7];
  D25():
    deopt 89 [];
  L44():
    vals8 = force? vals7;
    checkMissing(vals8);
    c4 = `is.object`(vals8);
    if c4 then L45() else L46(vals8);
  L57():
    p19 = prom<V +>{
      tf14 = ld tf;
      tf15 = force? tf14;
      checkMissing(tf15);
      return tf15;
    };
    r54 = dyn levels2(p19);
    check L58() else D26();
  D26():
    deopt 91 [r54];
  L5(dx5):
    l3 = ld out;
    c5 = `is.object`(l3);
    if c5 then L49() else L50(dx5, l3);
  L45():
    dr4 = tryDispatchBuiltin.1("[", vals8);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L47() else L46(dr4);
  L46(vals10):
    inds = ld inds;
    check L48() else D20();
  L58():
    c8 = `is.object`(r54);
    if c8 then L59() else L60(r54);
  D20():
    deopt 66 [vals10, inds];
  L6(dx10, dx11):
    st out = dx11;
    goto L7();
  L8(dx18):
    s = toForSeq(dx18);
    l6 = length(s);
    i = 0;
    goto L9(i);
  L47():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L5(dx4);
  L48():
    inds1 = force? inds;
    __1 = ldf `[` in base;
    r44 = dyn __1(vals10, inds1);
    goto L5(r44);
  L49():
    dr6 = tryDispatchBuiltin.0("[<-", l3, dx5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L51() else L50(dx5, dr6);
  L50(dx7, l5):
    cbind1 = ldf cbind;
    check L52() else D21();
  L59():
    dr12 = tryDispatchBuiltin.1("[", r54);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L61() else L60(dr12);
  L60(r56):
    levs4 = ld levs;
    check L62() else D27();
  D21():
    deopt 71 [dx7, l5, dx5];
  D27():
    deopt 92 [r56, levs4];
  L9(i1):
    i2 = `+`.1(i1, 1);
    c9 = `<`.1(l6, i2);
    if c9 then L63() else L16();
  L51():
    dx9 = getTryDispatchBuiltinValue(dr6);
    goto L6(dx5, dx9);
  L52():
    p16 = prom<V +>{
      nums5 = ld nums;
      nums6 = force? nums5;
      checkMissing(nums6);
      c6 = `is.object`(nums6);
      if c6 then L1() else L2(nums6);
    L0(dx13):
      return dx13;
    L1():
      dr8 = tryDispatchBuiltin.1("[", nums6);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(nums8):
      inds2 = ld inds;
      inds3 = force? inds2;
      __2 = ldf `[` in base;
      r45 = dyn __2(nums8, inds3);
      goto L0(r45);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx12);
    };
    p17 = prom<V +>{
      tf10 = ld tf;
      tf11 = force? tf10;
      checkMissing(tf11);
      c7 = `is.object`(tf11);
      if c7 then L1() else L2(tf11);
    L0(dx15):
      return dx15;
    L1():
      dr10 = tryDispatchBuiltin.1("[", tf11);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(tf13):
      inds4 = ld inds;
      inds5 = force? inds4;
      __3 = ldf `[` in base;
      r47 = dyn __3(tf13, inds5);
      goto L0(r47);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx14);
    };
    r49 = dyn cbind1(p16, p17);
    check L53() else D22();
  L61():
    dx17 = getTryDispatchBuiltinValue(dr12);
    goto L8(dx17);
  L62():
    levs5 = force? levs4;
    checkMissing(levs5);
    r57 = `!`(levs5);
    __4 = ldf `[` in base;
    r58 = dyn __4(r56, r57);
    goto L8(r58);
  D22():
    deopt 74 [dx7, l5, dx5, r49];
  L16():
    x = `[[`(s, i2, NULL, TRUE);
    st l = x;
    sym3 = ldf `rep.int`;
    base3 = ldf `rep.int` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L64() else L65();
  L53():
    ___1 = ldf `[<-` in base;
    r50 = dyn ___1(l5, dx5, r49);
    goto L6(dx7, r50);
  L63():
    goto L2();
  L10(i7, r60):
    l7 = ld out;
    c10 = `is.object`(l7);
    if c10 then L72() else L73(i7, r60, l7);
  L64():
    sym4 = ldf list;
    base4 = ldf list in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L66() else L67();
  L65():
    r59 = dyn base3(<lang list(NA_STR)>, <lang nrow(cnts)>);
    goto L10(i2, r59);
  L11(i10, r62):
    nrow = ldf nrow;
    check L69() else D29();
  L12(i14, dx20):
    st out = dx20;
    tf16 = ld tf;
    check L76() else D33();
  L66():
    list1 = ldf list in base;
    r63 = dyn list1(NA_STR);
    check L68() else D28();
  L67():
    r61 = dyn base4(NA_STR);
    goto L11(i2, r61);
  L72():
    dr14 = tryDispatchBuiltin.0("[[<-", l7, r60);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L74() else L73(i7, r60, dr14);
  L73(i12, r68, l9):
    l10 = ld l;
    check L75() else D32();
  D28():
    deopt 102 [i2, r63];
  D29():
    deopt 104 [i10];
  D32():
    deopt 110 [i12, r68, l9, r60, l10];
  D33():
    deopt 114 [i14, tf16];
  L68():
    goto L11(i2, r63);
  L69():
    p20 = prom<V +>{
      cnts6 = ld cnts;
      cnts7 = force? cnts6;
      checkMissing(cnts7);
      return cnts7;
    };
    r65 = dyn nrow(p20);
    check L70() else D30();
  L74():
    dx19 = getTryDispatchBuiltinValue(dr14);
    goto L12(i7, dx19);
  L75():
    l11 = force? l10;
    ____ = ldf `[[<-` in base;
    r71 = dyn ____(l9, r60, l11);
    goto L12(i12, r71);
  L76():
    tf17 = force? tf16;
    checkMissing(tf17);
    l12 = ld l;
    check L77() else D34();
  D30():
    deopt 106 [i10, r65];
  D34():
    deopt 115 [i14, tf17, l12];
  L70():
    rep_int = ldf `rep.int` in base;
    r66 = dyn rep_int(r62, r65);
    check L71() else D31();
  L77():
    l13 = force? l12;
    checkMissing(l13);
    r72 = `==`(tf17, l13);
    st i = r72;
    split = ldf split;
    check L78() else D35();
  D31():
    deopt 108 [i10, r66];
  D35():
    deopt 120 [i14];
  L71():
    goto L10(i10, r66);
  L78():
    p21 = prom<V +>{
      vals11 = ld vals;
      vals12 = force? vals11;
      checkMissing(vals12);
      c11 = `is.object`(vals12);
      if c11 then L1() else L2(vals12);
    L0(dx22):
      return dx22;
    L1():
      dr16 = tryDispatchBuiltin.1("[", vals12);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(vals14):
      i15 = ld i;
      i16 = force? i15;
      __5 = ldf `[` in base;
      r73 = dyn __5(vals14, i16);
      goto L0(r73);
    L3():
      dx21 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx21);
    };
    p22 = prom<V +>{
      nums9 = ld nums;
      nums10 = force? nums9;
      checkMissing(nums10);
      c12 = `is.object`(nums10);
      if c12 then L1() else L2(nums10);
    L0(dx24):
      return dx24;
    L1():
      dr18 = tryDispatchBuiltin.1("[", nums10);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(nums12):
      i17 = ld i;
      i18 = force? i17;
      __6 = ldf `[` in base;
      r75 = dyn __6(nums12, i18);
      goto L0(r75);
    L3():
      dx23 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx23);
    };
    r77 = dyn split(p21, p22);
    check L79() else D36();
  D36():
    deopt 123 [i14, r77];
  L79():
    l14 = ld out;
    c13 = `is.object`(l14);
    if c13 then L80() else L81(i14, r77, l14, r77, l14);
  L13(i22, r84, l20, r85, dx26):
    c14 = `is.object`(dx26);
    if c14 then L84() else L85(i22, r84, l20, dx26);
  L80():
    dr20 = tryDispatchBuiltin.1("[[", l14);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L82() else L81(i14, r77, l14, r77, dr20);
  L81(i20, r80, l17, r81, l18):
    l21 = ld l;
    check L83() else D37();
  D37():
    deopt 126 [i20, r80, l17, r81, l18, l21];
  L14(i26, r90, l26, dx30):
    c16 = `is.object`(l26);
    if c16 then L89() else L90(i26, r90, l26);
  L82():
    dx25 = getTryDispatchBuiltinValue(dr20);
    goto L13(i14, r77, l14, r77, dx25);
  L83():
    l22 = force? l21;
    __7 = ldf `[[` in base;
    r86 = dyn __7(l18, l22);
    goto L13(i20, r80, l17, r81, r86);
  L84():
    dr22 = tryDispatchBuiltin.0("[<-", dx26, r85);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L86() else L85(i22, r84, l20, dr22);
  L85(i24, r88, l24, dx28):
    unique1 = ldf unique;
    check L87() else D38();
  D38():
    deopt 131 [i24, r88, l24, dx28, r85];
  L15(i32, dx34):
    st out = dx34;
    goto L9(i32);
  L86():
    dx29 = getTryDispatchBuiltinValue(dr22);
    goto L14(i22, r84, l20, dx29);
  L87():
    p23 = prom<V +>{
      nums13 = ld nums;
      nums14 = force? nums13;
      checkMissing(nums14);
      c15 = `is.object`(nums14);
      if c15 then L1() else L2(nums14);
    L0(dx32):
      return dx32;
    L1():
      dr24 = tryDispatchBuiltin.1("[", nums14);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L3() else L2(dr24);
    L2(nums16):
      i27 = ld i;
      i28 = force? i27;
      __8 = ldf `[` in base;
      r91 = dyn __8(nums16, i28);
      goto L0(r91);
    L3():
      dx31 = getTryDispatchBuiltinValue(dr24);
      goto L0(dx31);
    };
    r93 = dyn unique1(p23);
    check L88() else D39();
  L89():
    dr26 = tryDispatchBuiltin.0("[[<-", l26, dx30);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L91() else L90(i26, r90, dr26);
  L90(i30, r96, l28):
    l29 = ld l;
    check L92() else D40();
  D39():
    deopt 133 [i24, r88, l24, dx28, r85, r93];
  D40():
    deopt 135 [i30, r96, l28, dx30, l29];
  L88():
    ___2 = ldf `[<-` in base;
    r94 = dyn ___2(dx28, r85, r93);
    goto L14(i24, r88, l24, r94);
  L91():
    dx33 = getTryDispatchBuiltinValue(dr26);
    goto L15(i26, dx33);
  L92():
    l30 = force? l29;
    ____1 = ldf `[[<-` in base;
    r99 = dyn ____1(l28, dx30, l30);
    goto L15(i30, r99);
  }
}
fun inner838351097(from, to) {
  (reg from:*, reg to:*) -+> V { var from:*, var to:*, reg paste:cls, reg lines:*, reg lines1:V, reg c:L, reg lines3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg from1:*, reg from2:V, reg to1:*, reg to2:V, reg r:V, reg __:cls, reg r1:V, reg p:p(V +), reg r3:V |
    mkenv;
    st from = from;
    st to = to;
    paste = ldf paste;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      lines = ld lines;
      lines1 = force? lines;
      checkMissing(lines1);
      c = `is.object`(lines1);
      if c then L1() else L2(lines1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", lines1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(lines3):
      from1 = ld from;
      from2 = force? from1;
      checkMissing(from2);
      to1 = ld to;
      to2 = force? to1;
      checkMissing(to2);
      r = `:`(from2, to2);
      __ = ldf `[` in base;
      r1 = dyn __(lines3, r);
      goto L0(r1);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r3 = dyn paste[, collapse](p, "\n");
    check L1() else D1();
  D1():
    deopt 5 [r3];
  L1():
    popenv;
    return r3;
  }
}