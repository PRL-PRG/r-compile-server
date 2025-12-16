fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1727407744;
    st prettyNum = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1727407744(x, `big.mark`, `big.interval`, `small.mark`, `small.interval`, `decimal.mark`, `input.d.mark`, `preserve.width`, `zero.print`, `replace.zero`, drop0trailing, `is.cmplx`, `...`) {
  (reg x:*, reg big_mark:*, reg big_interval:*, reg small_mark:*, reg small_interval:*, reg decimal_mark:*, reg input_d_mark:*, reg preserve_width:*, reg zero_print:*, reg replace_zero:*, reg drop0trailing:*, reg is_cmplx:*, reg ddd:dots) -+> V { var x:*, var `big.mark`:*, reg big_mark_isMissing:L, reg big_mark_orDefault:*, var `big.interval`:*, reg big_interval_isMissing:L, reg big_interval_orDefault:*, var `small.mark`:*, reg small_mark_isMissing:L, reg small_mark_orDefault:*, var `small.interval`:*, reg small_interval_isMissing:L, reg small_interval_orDefault:*, var `decimal.mark`:*, reg decimal_mark_isMissing:L, reg decimal_mark_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var `input.d.mark`:*, reg input_d_mark_isMissing:L, reg input_d_mark_orDefault:*, reg decimal_mark1:*, reg decimal_mark2:V, reg p1:p(V +), var `preserve.width`:*, reg preserve_width_isMissing:L, reg preserve_width_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg c:cls, reg r5:V, reg p2:p(V +), var `zero.print`:*, reg zero_print_isMissing:L, reg zero_print_orDefault:*, var `replace.zero`:*, reg replace_zero_isMissing:L, reg replace_zero_orDefault:*, var drop0trailing:*, reg drop0trailing_isMissing:L, reg drop0trailing_orDefault:*, var `is.cmplx`:*, reg is_cmplx_isMissing:L, reg is_cmplx_orDefault:*, var `...`:dots?, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg x1:*, reg x2:V, reg c1:L, reg r9:V, reg c2:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg x3:*, reg x4:V, reg c3:L, reg vapply:cls, reg x5:*, reg x6:V, reg p3:p(V +), reg format:*, reg format1:V, reg p4:p(V +), reg big_mark1:*, reg big_mark2:V, reg p5:p(V +), reg big_interval1:*, reg big_interval2:V, reg p6:p(V +), reg small_mark1:*, reg small_mark2:V, reg p7:p(V +), reg small_interval1:*, reg small_interval2:V, reg p8:p(V +), reg decimal_mark3:*, reg decimal_mark4:V, reg p9:p(V +), reg zero_print1:*, reg zero_print2:V, reg p10:p(V +), reg drop0trailing1:*, reg drop0trailing2:V, reg p11:p(V +), reg ddd1:dots?, reg r21:V, reg big_mark3:*, reg big_mark4:V, reg r23:V, reg c4:L, reg c6:V, reg small_mark3:*, reg small_mark4:V, reg r24:V, reg c7:L, reg c8:V, reg c10:L, reg c12:V, reg notChar:*, reg notChar1:V, reg c13:L, reg c14:L, reg c15:V, reg decimal_mark5:*, reg decimal_mark6:V, reg input_d_mark1:*, reg input_d_mark2:V, reg r25:V, reg c18:L, reg c19:V, reg c22:L, reg c23:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg r27:V, reg big_mark5:*, reg big_mark6:V, reg decimal_mark7:*, reg decimal_mark8:V, reg identical:cls, reg r28:V, reg c25:L, reg warning:cls, reg gettextf:cls, reg big_mark7:*, reg big_mark8:V, reg p12:p(V +), reg r30:V, reg p13:p(V +), reg r32:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r34:V, reg r35:V, reg zero_print3:*, reg zero_print4:V, reg c26:V, reg c27:L, reg c29:V, reg drop0trailing3:*, reg drop0trailing4:V, reg r36:V, reg c30:L, reg c31:V, reg nMark:*, reg nMark1:V, reg c33:L, reg c35:V, reg nZero:*, reg nZero1:V, reg c36:L, reg c37:V, reg c39:L, reg x7:*, reg x8:V, reg nMark2:*, reg nMark3:V, reg c40:L, reg c42:V, reg drop0trailing5:*, reg drop0trailing6:V, reg r39:V, reg c43:L, reg c44:V, reg c46:L, reg _format_zeros:cls, reg x9:*, reg x10:V, reg p14:p(V +), reg zero_print5:*, reg zero_print6:V, reg p15:p(V +), reg replace_zero1:*, reg replace_zero2:V, reg p16:p(V +), reg r43:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r46:V, reg r47:V, reg is_cmplx1:*, reg is_cmplx2:V, reg is_na:cls, reg r48:V, reg c47:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r49:V, reg r50:V, reg x11:*, reg x12:V, reg is_na1:cls, reg r51:V, reg x13:*, reg x14:V, reg r52:V, reg r53:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r54:V, reg r55:V, reg ina:*, reg ina1:V, reg all:cls, reg r56:V, reg c48:L, reg r57:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r58:V, reg grepl:cls, reg x15:*, reg x16:V, reg p17:p(V +), reg r60:V, reg any:cls, reg r61:V, reg match_arg:cls, reg preserve_width1:*, reg preserve_width2:V, reg p18:p(V +), reg r64:V, reg is_cmplx3:*, reg is_cmplx4:V, reg c49:L, reg _format_zeros1:cls, reg x17:*, reg x18:V, reg p19:p(V +), reg zero_print7:*, reg zero_print8:V, reg p20:p(V +), reg replace_zero3:*, reg replace_zero4:V, reg p21:p(V +), reg r68:V, reg strsplit:cls, reg sub:cls, reg x19:*, reg x20:V, reg p22:p(V +), reg r70:V, reg p23:p(V +), reg r72:V, reg lengths:cls, reg z_sp:*, reg z_sp1:V, reg p24:p(V +), reg r74:V, reg r75:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r76:V, reg r77:V, reg i3:*, reg i4:V, reg any1:cls, reg r78:V, reg c50:L, reg z_sp2:*, reg z_sp3:V, reg c51:L, reg z_sp5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i5:*, reg i6:V, reg __:cls, reg r79:V, reg vapply1:cls, reg z_sp6:*, reg z_sp7:V, reg p25:p(V +), reg __1:*, reg __2:V, reg p26:p(V +), reg r82:V, reg grep:cls, reg z_im:*, reg z_im1:V, reg p27:p(V +), reg r84:V, reg sub1:cls, reg z_im2:*, reg z_im3:V, reg c52:L, reg z_im5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg has_i:*, reg has_i1:V, reg __3:cls, reg r85:V, reg p28:p(V +), reg r87:V, reg l:*, reg c53:L, reg r89:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg has_i2:*, reg has_i3:V, reg ___:cls, reg r92:V, reg lapply:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r93:V, reg r94:V, reg vapply2:cls, reg z_sp8:*, reg z_sp9:V, reg p29:p(V +), reg __4:*, reg __5:V, reg p30:p(V +), reg r97:V, reg z_im6:*, reg z_im7:V, reg list:cls, reg r98:V, reg p31:p(V +), reg r100:cls, reg p32:p(V +), reg r102:V, reg paste0:cls, reg r103:*, reg r104:V, reg c54:L, reg r106:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __6:cls, reg r107:V, reg c55:L, reg dx9:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg has_i4:*, reg has_i5:V, reg __7:cls, reg r108:V, reg p33:p(V +), reg r110:V, reg l3:*, reg c56:L, reg r113:V, reg l6:*, reg r114:V, reg l7:*, reg dr10:V, reg dc5:L, reg dx12:V, reg r117:V, reg l9:*, reg r118:V, reg dx13:V, reg __8:cls, reg r119:V, reg c57:L, reg r121:V, reg l11:*, reg dx15:V, reg dr12:V, reg dc6:L, reg dx16:V, reg r123:V, reg l13:*, reg dx17:V, reg has_i6:*, reg has_i7:V, reg ___1:cls, reg r124:V, reg c58:L, reg r126:V, reg l15:*, reg dr14:V, reg dc7:L, reg dx18:V, reg dx19:V, reg ____:cls, reg r129:V, reg paste1:cls, reg r130:*, reg r131:V, reg c59:L, reg r133:V, reg dr16:V, reg dc8:L, reg dx20:V, reg dx21:V, reg __9:cls, reg r134:V, reg p34:p(V +), reg vapply3:cls, reg z_sp10:*, reg z_sp11:V, reg p35:p(V +), reg __10:*, reg __11:V, reg p36:p(V +), reg r138:V, reg p37:p(V +), reg r140:*, reg r141:V, reg c60:L, reg r143:V, reg dr18:V, reg dc9:L, reg dx22:V, reg dx23:V, reg __12:cls, reg r144:V, reg p38:p(V +), reg r146:V, reg l16:*, reg c61:L, reg r148:V, reg l18:*, reg dr20:V, reg dc10:L, reg dx24:V, reg r150:V, reg dx25:V, reg i7:*, reg i8:V, reg ___2:cls, reg r151:V, reg x21:*, reg x22:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r155:V, reg r156:V, reg input_d_mark3:*, reg input_d_mark4:V, reg nchar:cls, reg r157:V, reg r158:V, reg c62:L, reg stop:cls, reg r159:V, reg strsplit1:cls, reg x23:*, reg x24:V, reg p39:p(V +), reg input_d_mark5:*, reg input_d_mark6:V, reg p40:p(V +), reg r163:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r164:V, reg r165:V, reg lengths1:cls, reg x_sp:*, reg x_sp1:V, reg p41:p(V +), reg r167:V, reg r168:V, reg any2:cls, reg r169:V, reg c63:L, reg lapply1:cls, reg x_sp2:*, reg x_sp3:V, reg p42:p(V +), reg r171:cls, reg p43:p(V +), reg r173:V, reg vapply4:cls, reg x_sp4:*, reg x_sp5:V, reg p44:p(V +), reg __13:*, reg __14:V, reg p45:p(V +), reg r177:V, reg vapply5:cls, reg x_sp6:*, reg x_sp7:V, reg p46:p(V +), reg __15:*, reg __16:V, reg p47:p(V +), reg r180:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r181:V, reg r182:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r183:V, reg r184:V, reg A_:*, reg A_1:V, reg is_na2:cls, reg r185:V, reg any3:cls, reg r186:V, reg c64:L, reg l19:*, reg c65:L, reg r188:S, reg l21:*, reg dr22:V, reg dc11:L, reg dx26:V, reg r190:S, reg dx27:V, reg iN:*, reg iN1:V, reg ___3:cls, reg r191:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r193:V, reg r194:V, reg big_mark9:*, reg big_mark10:V, reg nzchar:cls, reg r195:V, reg c66:L, reg c68:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r196:V, reg c71:L, reg r197:V, reg grep1:cls, reg paste2:cls, reg big_interval3:*, reg big_interval4:V, reg r198:V, reg p48:p(V +), reg r200:V, reg p49:p(V +), reg B_:*, reg B_1:V, reg p50:p(V +), reg r203:V, reg length:cls, reg r204:V, reg c72:L, reg c73:V, reg c75:L, reg r205:cls, reg revStr:cls, reg gsub:cls, reg paste3:cls, reg big_interval5:*, reg big_interval6:V, reg p51:p(V +), reg r207:V, reg p52:p(V +), reg paste4:cls, reg revStr1:cls, reg big_mark11:*, reg big_mark12:V, reg p53:p(V +), reg r210:V, reg p54:p(V +), reg r212:V, reg p55:p(V +), reg revStr2:cls, reg B_2:*, reg B_3:V, reg c76:L, reg B_5:V, reg dr24:V, reg dc12:L, reg dx28:V, reg dx29:V, reg i_big:*, reg i_big1:V, reg __17:cls, reg r214:V, reg p56:p(V +), reg r216:V, reg p57:p(V +), reg r218:V, reg p58:p(V +), reg r220:V, reg l22:*, reg c77:L, reg r222:V, reg l24:*, reg dr26:V, reg dc13:L, reg dx30:V, reg r224:V, reg dx31:V, reg i_big2:*, reg i_big3:V, reg ___4:cls, reg r225:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r227:V, reg r228:V, reg small_mark5:*, reg small_mark6:V, reg nzchar1:cls, reg r229:V, reg c78:L, reg c80:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r230:V, reg c83:L, reg r231:V, reg grep2:cls, reg paste5:cls, reg small_interval3:*, reg small_interval4:V, reg r232:V, reg p59:p(V +), reg r234:V, reg p60:p(V +), reg A_2:*, reg A_3:V, reg p61:p(V +), reg r237:V, reg length1:cls, reg r238:V, reg c84:L, reg c85:V, reg c87:L, reg gsub1:cls, reg paste6:cls, reg small_interval5:*, reg small_interval6:V, reg p62:p(V +), reg r240:V, reg p63:p(V +), reg paste7:cls, reg small_mark7:*, reg small_mark8:V, reg p64:p(V +), reg r243:V, reg p65:p(V +), reg A_4:*, reg A_5:V, reg c88:L, reg A_7:V, reg dr28:V, reg dc14:L, reg dx32:V, reg dx33:V, reg i_sml:*, reg i_sml1:V, reg __18:cls, reg r245:V, reg p66:p(V +), reg r247:V, reg l25:*, reg c89:L, reg r249:V, reg l27:*, reg dr30:V, reg dc15:L, reg dx34:V, reg r251:V, reg dx35:V, reg i_sml2:*, reg i_sml3:V, reg ___5:cls, reg r252:V, reg drop0trailing7:*, reg drop0trailing8:V, reg c90:L, reg A_8:*, reg A_9:V, reg c91:L, reg A_11:V, reg dr32:V, reg dc16:L, reg dx36:V, reg dx37:V, reg iN2:*, reg iN3:V, reg r254:V, reg __19:cls, reg r255:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r256:V, reg r257:V, reg grep3:cls, reg a:*, reg a1:V, reg p67:p(V +), reg r259:V, reg length2:cls, reg r260:V, reg c92:L, reg sub2:cls, reg a2:*, reg a3:V, reg c93:L, reg a5:V, reg dr34:V, reg dc17:L, reg dx38:V, reg dx39:V, reg hasE:*, reg hasE1:V, reg __20:cls, reg r261:V, reg p68:p(V +), reg r263:V, reg l28:*, reg c94:L, reg r265:V, reg l30:*, reg dr36:V, reg dc18:L, reg dx40:V, reg dx41:V, reg hasE2:*, reg hasE3:V, reg ___6:cls, reg r268:V, reg sub3:cls, reg a6:*, reg a7:V, reg c95:L, reg a9:V, reg dr38:V, reg dc19:L, reg dx42:V, reg dx43:V, reg hasE4:*, reg hasE5:V, reg r269:V, reg __21:cls, reg r270:V, reg p69:p(V +), reg r272:V, reg l31:*, reg c96:L, reg r274:V, reg l33:*, reg dr40:V, reg dc20:L, reg dx44:V, reg r276:V, reg dx45:V, reg hasE6:*, reg hasE7:V, reg r277:V, reg ___7:cls, reg r278:V, reg sub4:cls, reg a10:*, reg a11:V, reg p70:p(V +), reg r281:V, reg a12:*, reg a13:V, reg l34:*, reg c97:L, reg a15:V, reg l36:*, reg dr42:V, reg dc21:L, reg dx46:V, reg dx47:V, reg iN4:*, reg iN5:V, reg r282:V, reg ___8:cls, reg r283:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r284:V, reg r285:V, reg A_12:*, reg A_13:V, reg nzchar2:cls, reg r286:V, reg r287:V, reg _format_zeros2:cls, reg paste8:cls, reg B_6:*, reg B_7:V, reg p71:p(V +), reg sym21:cls, reg base21:cls, reg guard21:L, reg r290:V, reg r291:V, reg decimal_mark9:*, reg decimal_mark10:V, reg c98:cls, reg r292:V, reg c99:L, reg r294:V, reg dr44:V, reg dc22:L, reg dx48:V, reg dx49:V, reg iN6:*, reg iN7:V, reg r295:V, reg __22:cls, reg r296:V, reg p72:p(V +), reg A_14:*, reg A_15:V, reg p73:p(V +), reg r299:V, reg p74:p(V +), reg zero_print9:*, reg zero_print10:V, reg p75:p(V +), reg replace_zero5:*, reg replace_zero6:V, reg p76:p(V +), reg r303:V, reg preserve_width3:*, reg preserve_width4:V, reg r304:V, reg c100:L, reg sym22:cls, reg base22:cls, reg guard22:L, reg r305:V, reg r306:V, reg A_16:*, reg A_17:V, reg nchar1:cls, reg r307:V, reg nnc:*, reg nnc1:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r308:V, reg nnc4:V, reg r309:V, reg x25:*, reg x26:V, reg nchar2:cls, reg r310:V, reg r311:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r312:V, reg r313:V, reg d_len:*, reg d_len1:V, reg r314:V, reg any4:cls, reg r315:V, reg c101:L, reg preserve_width5:*, reg preserve_width6:V, reg c102:L, reg c103:L, reg c104:L, reg c105:L, reg c106:L, reg i_ddd:dots, reg i9:V, reg c107:L, reg c108:L, reg r316:V, reg vapply6:cls, reg which:cls, reg ii:*, reg ii1:V, reg p77:p(V +), reg r318:V, reg p78:p(V +), reg r320:cls, reg p79:p(V +), reg r322:V, reg l37:*, reg c109:L, reg r324:V, reg l39:*, reg dr46:V, reg dc23:L, reg dx50:V, reg r326:V, reg dx51:V, reg ii2:*, reg ii3:V, reg ___9:cls, reg r327:V, reg format2:cls, reg A_18:*, reg A_19:V, reg p80:p(V +), reg r329:V, reg r330:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r332:V, reg r333:V, reg x27:*, reg x28:V, reg attributes:cls, reg r334:V, reg l40:*, reg attributes__:cls, reg r335:V, reg l41:*, reg class__:cls, reg r336:V, reg A_20:*, reg A_21:V |
    mkenv;
    st x = x;
    big_mark_isMissing = missing.0(big_mark);
    if big_mark_isMissing then L0("") else L0(big_mark);
  L0(big_mark_orDefault):
    st `big.mark` = big_mark_orDefault;
    big_interval_isMissing = missing.0(big_interval);
    if big_interval_isMissing then L1(3) else L1(big_interval);
  L1(big_interval_orDefault):
    st `big.interval` = big_interval_orDefault;
    small_mark_isMissing = missing.0(small_mark);
    if small_mark_isMissing then L2("") else L2(small_mark);
  L2(small_mark_orDefault):
    st `small.mark` = small_mark_orDefault;
    small_interval_isMissing = missing.0(small_interval);
    if small_interval_isMissing then L3(5) else L3(small_interval);
  L3(small_interval_orDefault):
    st `small.interval` = small_interval_orDefault;
    decimal_mark_isMissing = missing.0(decimal_mark);
    if decimal_mark_isMissing then L4() else L5(decimal_mark);
  L4():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("OutDec");
      return r;
    };
    goto L5(p);
  L5(decimal_mark_orDefault):
    st `decimal.mark` = decimal_mark_orDefault;
    input_d_mark_isMissing = missing.0(input_d_mark);
    if input_d_mark_isMissing then L6() else L7(input_d_mark);
  L6():
    p1 = prom<V +>{
      decimal_mark1 = ld `decimal.mark`;
      decimal_mark2 = force? decimal_mark1;
      checkMissing(decimal_mark2);
      return decimal_mark2;
    };
    goto L7(p1);
  L7(input_d_mark_orDefault):
    st `input.d.mark` = input_d_mark_orDefault;
    preserve_width_isMissing = missing.0(preserve_width);
    if preserve_width_isMissing then L8() else L9(preserve_width);
  L8():
    p2 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r4):
      return r4;
    L1():
      c = ldf c in base;
      r5 = dyn c("common", "individual", "none");
      goto L0(r5);
    L2():
      r3 = dyn base("common", "individual", "none");
      goto L0(r3);
    };
    goto L9(p2);
  L9(preserve_width_orDefault):
    st `preserve.width` = preserve_width_orDefault;
    zero_print_isMissing = missing.0(zero_print);
    if zero_print_isMissing then L10(NULL) else L10(zero_print);
  L10(zero_print_orDefault):
    st `zero.print` = zero_print_orDefault;
    replace_zero_isMissing = missing.0(replace_zero);
    if replace_zero_isMissing then L11(FALSE) else L11(replace_zero);
  L11(replace_zero_orDefault):
    st `replace.zero` = replace_zero_orDefault;
    drop0trailing_isMissing = missing.0(drop0trailing);
    if drop0trailing_isMissing then L12(FALSE) else L12(drop0trailing);
  L12(drop0trailing_orDefault):
    st drop0trailing = drop0trailing_orDefault;
    is_cmplx_isMissing = missing.0(is_cmplx);
    if is_cmplx_isMissing then L13(NA_LGL) else L13(is_cmplx);
  L13(is_cmplx_orDefault):
    st `is.cmplx` = is_cmplx_orDefault;
    st `...` = ddd;
    sym1 = ldf `is.character`;
    base1 = ldf `is.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L96() else L97();
  L14(r8):
    r9 = `!`(r8);
    st notChar = r9;
    c2 = `as.logical`(r9);
    if c2 then L99() else L15();
  L96():
    x1 = ld x;
    check L98() else D0();
  L97():
    r7 = dyn base1(<sym x>);
    goto L14(r7);
  D0():
    deopt 1 [x1];
  L15():
    goto L17();
  L17():
    big_mark3 = ld `big.mark`;
    check L106() else D4();
  L98():
    x2 = force? x1;
    checkMissing(x2);
    c1 = `is.character`(x2);
    goto L14(c1);
  L99():
    sym2 = ldf `is.complex`;
    base2 = ldf `is.complex` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L100() else L101();
  D4():
    deopt 35 [big_mark3];
  L16(r11):
    st `is.cmplx` = r11;
    vapply = ldf vapply;
    check L103() else D2();
  L100():
    x3 = ld x;
    check L102() else D1();
  L101():
    r10 = dyn base2(<sym x>);
    goto L16(r10);
  L106():
    big_mark4 = force? big_mark3;
    checkMissing(big_mark4);
    r23 = `==`(big_mark4, "");
    c4 = `as.logical`(r23);
    if c4 then L107() else L18(c4);
  D1():
    deopt 7 [x3];
  D2():
    deopt 12 [];
  L18(c6):
    c10 = `as.logical`(c6);
    if c10 then L110() else L19(c10);
  L102():
    x4 = force? x3;
    checkMissing(x4);
    c3 = `is.complex`(x4);
    goto L16(c3);
  L103():
    p3 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    p4 = prom<V +>{
      format = ld format;
      format1 = force? format;
      checkMissing(format1);
      return format1;
    };
    p5 = prom<V +>{
      big_mark1 = ld `big.mark`;
      big_mark2 = force? big_mark1;
      checkMissing(big_mark2);
      return big_mark2;
    };
    p6 = prom<V +>{
      big_interval1 = ld `big.interval`;
      big_interval2 = force? big_interval1;
      checkMissing(big_interval2);
      return big_interval2;
    };
    p7 = prom<V +>{
      small_mark1 = ld `small.mark`;
      small_mark2 = force? small_mark1;
      checkMissing(small_mark2);
      return small_mark2;
    };
    p8 = prom<V +>{
      small_interval1 = ld `small.interval`;
      small_interval2 = force? small_interval1;
      checkMissing(small_interval2);
      return small_interval2;
    };
    p9 = prom<V +>{
      decimal_mark3 = ld `decimal.mark`;
      decimal_mark4 = force? decimal_mark3;
      checkMissing(decimal_mark4);
      return decimal_mark4;
    };
    p10 = prom<V +>{
      zero_print1 = ld `zero.print`;
      zero_print2 = force? zero_print1;
      checkMissing(zero_print2);
      return zero_print2;
    };
    p11 = prom<V +>{
      drop0trailing1 = ld drop0trailing;
      drop0trailing2 = force? drop0trailing1;
      checkMissing(drop0trailing2);
      return drop0trailing2;
    };
    ddd1 = ld `...`;
    r21 = dyn vapply[, , , `big.mark`, `big.interval`, `small.mark`, `small.interval`, `decimal.mark`, `zero.print`, drop0trailing, `...`](p3, p4, "", p5, p6, p7, p8, p9, p10, p11, ddd1);
    check L104() else D3();
  L107():
    small_mark3 = ld `small.mark`;
    check L108() else D5();
  D3():
    deopt 31 [r21];
  D5():
    deopt 39 [c4, small_mark3];
  L19(c12):
    st nMark = c12;
    sym3 = ldf identical;
    base3 = ldf identical in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L117() else L118();
  L104():
    st x = r21;
    goto L17();
  L108():
    small_mark4 = force? small_mark3;
    checkMissing(small_mark4);
    r24 = `==`(small_mark4, "");
    c7 = `as.logical`(r24);
    c8 = `&&`(c4, c7);
    goto L18(c8);
  L110():
    notChar = ld notChar;
    check L111() else D6();
  D6():
    deopt 44 [c10, notChar];
  L21(r27):
    c25 = `as.logical`(r27);
    if c25 then L122() else L22();
  L111():
    notChar1 = force? notChar;
    checkMissing(notChar1);
    c13 = `as.logical`(notChar1);
    if c13 then L20(c10, c13) else L112();
  L117():
    big_mark5 = ld `big.mark`;
    check L119() else D9();
  L118():
    r26 = dyn base3(<sym big.mark>, <sym decimal.mark>);
    goto L21(r26);
  D9():
    deopt 55 [big_mark5];
  L20(c14, c15):
    c22 = `as.logical`(c15);
    c23 = `&&`(c14, c22);
    goto L19(c23);
  L22():
    goto L23();
  L23():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L126() else L127();
  L112():
    decimal_mark5 = ld `decimal.mark`;
    check L113() else D7();
  L119():
    big_mark6 = force? big_mark5;
    checkMissing(big_mark6);
    decimal_mark7 = ld `decimal.mark`;
    check L120() else D10();
  L122():
    warning = ldf warning;
    check L123() else D12();
  D7():
    deopt 46 [c10, c13, decimal_mark5];
  D10():
    deopt 57 [decimal_mark7];
  D12():
    deopt 69 [];
  L24(r35):
    c27 = `as.logical`(r35);
    if c27 then L129() else L25(c27);
  L113():
    decimal_mark6 = force? decimal_mark5;
    checkMissing(decimal_mark6);
    input_d_mark1 = ld `input.d.mark`;
    check L114() else D8();
  L120():
    decimal_mark8 = force? decimal_mark7;
    checkMissing(decimal_mark8);
    identical = ldf identical in base;
    r28 = dyn identical(big_mark6, decimal_mark8, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L121() else D11();
  L123():
    p13 = prom<V +>{
      gettextf = ldf gettextf;
      p12 = prom<V +>{
        big_mark7 = ld `big.mark`;
        big_mark8 = force? big_mark7;
        checkMissing(big_mark8);
        return big_mark8;
      };
      r30 = dyn gettextf("'big.mark' and 'decimal.mark' are both '%s', which could be confusing", p12);
      return r30;
    };
    r32 = dyn warning[, domain](p13, NA_LGL);
    check L124() else D13();
  L126():
    zero_print3 = ld `zero.print`;
    check L128() else D14();
  L127():
    r34 = dyn base4(<sym zero.print>);
    goto L24(r34);
  D8():
    deopt 47 [c10, c13, decimal_mark6, input_d_mark1];
  D11():
    deopt 67 [r28];
  D13():
    deopt 73 [r32];
  D14():
    deopt 77 [zero_print3];
  L25(c29):
    st nZero = c29;
    nMark = ld nMark;
    check L132() else D16();
  L114():
    input_d_mark2 = force? input_d_mark1;
    checkMissing(input_d_mark2);
    r25 = `==`(decimal_mark6, input_d_mark2);
    c18 = `as.logical`(r25);
    c19 = `||`(c13, c18);
    goto L20(c10, c19);
  L121():
    goto L21(r28);
  L124():
    goto L23();
  L128():
    zero_print4 = force? zero_print3;
    checkMissing(zero_print4);
    c26 = `==`(zero_print4, NULL);
    goto L24(c26);
  L129():
    drop0trailing3 = ld drop0trailing;
    check L130() else D15();
  D15():
    deopt 80 [c27, drop0trailing3];
  D16():
    deopt 85 [nMark];
  L130():
    drop0trailing4 = force? drop0trailing3;
    checkMissing(drop0trailing4);
    r36 = `!`(drop0trailing4);
    c30 = `as.logical`(r36);
    c31 = `&&`(c27, c30);
    goto L25(c31);
  L132():
    nMark1 = force? nMark;
    checkMissing(nMark1);
    c33 = `as.logical`(nMark1);
    if c33 then L133() else L26(c33);
  L26(c35):
    c39 = `as.logical`(c35);
    if c39 then L136() else L27();
  L133():
    nZero = ld nZero;
    check L134() else D17();
  D17():
    deopt 87 [c33, nZero];
  L27():
    nMark2 = ld nMark;
    check L140() else D19();
  L134():
    nZero1 = force? nZero;
    checkMissing(nZero1);
    c36 = `as.logical`(nZero1);
    c37 = `&&`(c33, c36);
    goto L26(c37);
  L136():
    x7 = ld x;
    check L137() else D18();
  D18():
    deopt 90 [x7];
  D19():
    deopt 95 [nMark2];
  L137():
    x8 = force? x7;
    checkMissing(x8);
    popenv;
    return x8;
  L140():
    nMark3 = force? nMark2;
    checkMissing(nMark3);
    c40 = `as.logical`(nMark3);
    if c40 then L141() else L29(c40);
  L29(c42):
    c46 = `as.logical`(c42);
    if c46 then L144() else L30();
  L141():
    drop0trailing5 = ld drop0trailing;
    check L142() else D20();
  D20():
    deopt 97 [c40, drop0trailing5];
  L30():
    sym5 = ldf `is.na`;
    base5 = ldf `is.na` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L149() else L150();
  L142():
    drop0trailing6 = force? drop0trailing5;
    checkMissing(drop0trailing6);
    r39 = `!`(drop0trailing6);
    c43 = `as.logical`(r39);
    c44 = `&&`(c40, c43);
    goto L29(c44);
  L144():
    _format_zeros = ldf `.format.zeros`;
    check L145() else D21();
  D21():
    deopt 102 [];
  L32(r47):
    c47 = `as.logical`(r47);
    if c47 then L153() else L33();
  L145():
    p14 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    p15 = prom<V +>{
      zero_print5 = ld `zero.print`;
      zero_print6 = force? zero_print5;
      checkMissing(zero_print6);
      return zero_print6;
    };
    p16 = prom<V +>{
      replace_zero1 = ld `replace.zero`;
      replace_zero2 = force? replace_zero1;
      checkMissing(replace_zero2);
      return replace_zero2;
    };
    r43 = dyn _format_zeros[, , replace](p14, p15, p16);
    check L146() else D22();
  L149():
    is_cmplx1 = ld `is.cmplx`;
    check L151() else D23();
  L150():
    r46 = dyn base5(<sym is.cmplx>);
    goto L32(r46);
  D22():
    deopt 107 [r43];
  D23():
    deopt 113 [is_cmplx1];
  L33():
    goto L38();
  L38():
    match_arg = ldf `match.arg`;
    check L171() else D33();
  L146():
    popenv;
    return r43;
  L151():
    is_cmplx2 = force? is_cmplx1;
    checkMissing(is_cmplx2);
    is_na = ldf `is.na` in base;
    r48 = dyn is_na(is_cmplx2);
    check L152() else D24();
  L153():
    sym6 = ldf `is.na`;
    base6 = ldf `is.na` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L154() else L155();
  D24():
    deopt 116 [r48];
  D33():
    deopt 149 [];
  L34(r50):
    x13 = ld x;
    check L158() else D27();
  L152():
    goto L32(r48);
  L154():
    x11 = ld x;
    check L156() else D25();
  L155():
    r49 = dyn base6(<sym x>);
    goto L34(r49);
  L171():
    p18 = prom<V +>{
      preserve_width1 = ld `preserve.width`;
      preserve_width2 = force? preserve_width1;
      checkMissing(preserve_width2);
      return preserve_width2;
    };
    r64 = dyn match_arg(p18);
    check L172() else D34();
  D25():
    deopt 119 [x11];
  D27():
    deopt 122 [r50, x13];
  D34():
    deopt 151 [r64];
  L156():
    x12 = force? x11;
    checkMissing(x12);
    is_na1 = ldf `is.na` in base;
    r51 = dyn is_na1(x12);
    check L157() else D26();
  L158():
    x14 = force? x13;
    checkMissing(x14);
    r52 = `==`(x14, "NA");
    r53 = `||`(r50, r52);
    st ina = r53;
    sym7 = ldf all;
    base7 = ldf all in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L159() else L160();
  L172():
    st `preserve.width` = r64;
    is_cmplx3 = ld `is.cmplx`;
    check L173() else D35();
  D26():
    deopt 122 [r51];
  D35():
    deopt 153 [is_cmplx3];
  L35(r55):
    c48 = `as.logical`(r55);
    if c48 then L163() else L36();
  L157():
    goto L34(r51);
  L159():
    ina = ld ina;
    check L161() else D28();
  L160():
    r54 = dyn base7(<sym ina>);
    goto L35(r54);
  L173():
    is_cmplx4 = force? is_cmplx3;
    checkMissing(is_cmplx4);
    c49 = `as.logical`(is_cmplx4);
    if c49 then L174() else L39();
  D28():
    deopt 130 [ina];
  L36():
    sym8 = ldf any;
    base8 = ldf any in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L165() else L166();
  L37(r57):
    st `is.cmplx` = r57;
    goto L38();
  L39():
    sym11 = ldf nchar;
    base11 = ldf nchar in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L225() else L226();
  L161():
    ina1 = force? ina;
    checkMissing(ina1);
    all = ldf all in base;
    r56 = dyn all(ina1);
    check L162() else D29();
  L163():
    goto L37(FALSE);
  L174():
    _format_zeros1 = ldf `.format.zeros`;
    check L175() else D36();
  D29():
    deopt 133 [r56];
  D36():
    deopt 156 [];
  L50(r156):
    r158 = `==`(r156, 0.0);
    c62 = `as.logical`(r158);
    if c62 then L229() else L51();
  L162():
    goto L35(r56);
  L165():
    grepl = ldf grepl;
    check L167() else D30();
  L166():
    r58 = dyn base8(<lang grepl("[0-9].*[-+][0-9].*i$", x)>);
    goto L37(r58);
  L175():
    p19 = prom<V +>{
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      return x18;
    };
    p20 = prom<V +>{
      zero_print7 = ld `zero.print`;
      zero_print8 = force? zero_print7;
      checkMissing(zero_print8);
      return zero_print8;
    };
    p21 = prom<V +>{
      replace_zero3 = ld `replace.zero`;
      replace_zero4 = force? replace_zero3;
      checkMissing(replace_zero4);
      return replace_zero4;
    };
    r68 = dyn _format_zeros1[, , replace](p19, p20, p21);
    check L176() else D37();
  L225():
    input_d_mark3 = ld `input.d.mark`;
    check L227() else D62();
  L226():
    r155 = dyn base11(<sym input.d.mark>);
    goto L50(r155);
  D30():
    deopt 139 [];
  D37():
    deopt 161 [r68];
  D62():
    deopt 259 [input_d_mark3];
  L51():
    goto L52();
  L52():
    strsplit1 = ldf strsplit;
    check L233() else D66();
  L167():
    p17 = prom<V +>{
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      return x16;
    };
    r60 = dyn grepl("[0-9].*[-+][0-9].*i$", p17);
    check L168() else D31();
  L176():
    st x = r68;
    strsplit = ldf strsplit;
    check L177() else D38();
  L227():
    input_d_mark4 = force? input_d_mark3;
    checkMissing(input_d_mark4);
    nchar = ldf nchar in base;
    r157 = dyn nchar(input_d_mark4, "chars", FALSE, NA_LGL);
    check L228() else D63();
  L229():
    stop = ldf stop;
    check L230() else D64();
  D31():
    deopt 142 [r60];
  D38():
    deopt 164 [];
  D63():
    deopt 265 [r157];
  D64():
    deopt 269 [];
  D66():
    deopt 275 [];
  L168():
    any = ldf any in base;
    r61 = dyn any(r60);
    check L169() else D32();
  L177():
    p23 = prom<V +>{
      sub = ldf sub;
      p22 = prom<V +>{
        x19 = ld x;
        x20 = force? x19;
        checkMissing(x20);
        return x20;
      };
      r70 = dyn sub("([0-9] *)([-+])( *[0-9])", "\\1::\\2::\\3", p22);
      return r70;
    };
    r72 = dyn strsplit[, , fixed](p23, "::", TRUE);
    check L178() else D39();
  L228():
    goto L50(r157);
  L230():
    r159 = dyn stop("'input.d.mark' has no characters");
    check L231() else D65();
  L233():
    p39 = prom<V +>{
      x23 = ld x;
      x24 = force? x23;
      checkMissing(x24);
      return x24;
    };
    p40 = prom<V +>{
      input_d_mark5 = ld `input.d.mark`;
      input_d_mark6 = force? input_d_mark5;
      checkMissing(input_d_mark6);
      return input_d_mark6;
    };
    r163 = dyn strsplit1[, , fixed](p39, p40, TRUE);
    check L234() else D67();
  D32():
    deopt 144 [r61];
  D39():
    deopt 169 [r72];
  D65():
    deopt 271 [r159];
  D67():
    deopt 280 [r163];
  L169():
    goto L37(r61);
  L178():
    st `z.sp` = r72;
    lengths = ldf lengths;
    check L179() else D40();
  L231():
    goto L52();
  L234():
    st `x.sp` = r163;
    sym12 = ldf any;
    base12 = ldf any in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L235() else L236();
  D40():
    deopt 172 [];
  L53(r165):
    c63 = `as.logical`(r165);
    if c63 then L240() else L54();
  L179():
    p24 = prom<V +>{
      z_sp = ld `z.sp`;
      z_sp1 = force? z_sp;
      checkMissing(z_sp1);
      return z_sp1;
    };
    r74 = dyn lengths(p24);
    check L180() else D41();
  L235():
    lengths1 = ldf lengths;
    check L237() else D68();
  L236():
    r164 = dyn base12(<lang `>`(lengths(x.sp), 2.0)>);
    goto L53(r164);
  D41():
    deopt 174 [r74];
  D68():
    deopt 285 [];
  L54():
    goto L55();
  L55():
    vapply4 = ldf vapply;
    check L244() else D73();
  L180():
    r75 = `==`(r74, 3);
    st i3 = r75;
    sym9 = ldf any;
    base9 = ldf any in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L181() else L182();
  L237():
    p41 = prom<V +>{
      x_sp = ld `x.sp`;
      x_sp1 = force? x_sp;
      checkMissing(x_sp1);
      return x_sp1;
    };
    r167 = dyn lengths1(p41);
    check L238() else D69();
  L240():
    lapply1 = ldf lapply;
    check L241() else D71();
  D69():
    deopt 287 [r167];
  D71():
    deopt 293 [];
  D73():
    deopt 301 [];
  L40(r77):
    c50 = `as.logical`(r77);
    if c50 then L185() else L41();
  L181():
    i3 = ld i3;
    check L183() else D42();
  L182():
    r76 = dyn base9(<sym i3>);
    goto L40(r76);
  L238():
    r168 = `>`(r167, 2.0);
    any2 = ldf any in base;
    r169 = dyn any2(r168);
    check L239() else D70();
  L241():
    p42 = prom<V +>{
      x_sp2 = ld `x.sp`;
      x_sp3 = force? x_sp2;
      checkMissing(x_sp3);
      return x_sp3;
    };
    p43 = prom<V +>{
      r171 = clos inner1268674652;
      return r171;
    };
    r173 = dyn lapply1(p42, p43);
    check L242() else D72();
  L244():
    p44 = prom<V +>{
      x_sp4 = ld `x.sp`;
      x_sp5 = force? x_sp4;
      checkMissing(x_sp5);
      return x_sp5;
    };
    p45 = prom<V +>{
      __13 = ld `[`;
      __14 = force? __13;
      checkMissing(__14);
      return __14;
    };
    r177 = dyn vapply4(p44, p45, "", 1);
    check L245() else D74();
  D42():
    deopt 180 [i3];
  D70():
    deopt 291 [r169];
  D72():
    deopt 296 [r173];
  D74():
    deopt 306 [r177];
  L41():
    goto L48();
  L48():
    x21 = ld x;
    check L222() else D61();
  L183():
    i4 = force? i3;
    checkMissing(i4);
    any1 = ldf any in base;
    r78 = dyn any1(i4);
    check L184() else D43();
  L185():
    z_sp2 = ld `z.sp`;
    check L186() else D44();
  L239():
    goto L53(r169);
  L242():
    st `x.sp` = r173;
    goto L55();
  L245():
    st `B.` = r177;
    vapply5 = ldf vapply;
    check L246() else D75();
  D43():
    deopt 183 [r78];
  D44():
    deopt 184 [z_sp2];
  D61():
    deopt 252 [x21];
  D75():
    deopt 309 [];
  L184():
    goto L40(r78);
  L186():
    z_sp3 = force? z_sp2;
    checkMissing(z_sp3);
    c51 = `is.object`(z_sp3);
    if c51 then L187() else L188(z_sp3);
  L222():
    x22 = force? x21;
    checkMissing(x22);
    popenv;
    return x22;
  L246():
    p46 = prom<V +>{
      x_sp6 = ld `x.sp`;
      x_sp7 = force? x_sp6;
      checkMissing(x_sp7);
      return x_sp7;
    };
    p47 = prom<V +>{
      __15 = ld `[`;
      __16 = force? __15;
      checkMissing(__16);
      return __16;
    };
    r180 = dyn vapply5(p46, p47, "", 2);
    check L247() else D76();
  D76():
    deopt 314 [r180];
  L42(dx1):
    st `z.sp` = dx1;
    vapply1 = ldf vapply;
    check L191() else D46();
  L187():
    dr = tryDispatchBuiltin.1("[", z_sp3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L189() else L188(dr);
  L188(z_sp5):
    i5 = ld i3;
    check L190() else D45();
  L247():
    st `A.` = r180;
    sym13 = ldf any;
    base13 = ldf any in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L248() else L249();
  D45():
    deopt 186 [z_sp5, i5];
  D46():
    deopt 191 [];
  L56(r182):
    c64 = `as.logical`(r182);
    if c64 then L255() else L58();
  L189():
    dx = getTryDispatchBuiltinValue(dr);
    goto L42(dx);
  L190():
    i6 = force? i5;
    __ = ldf `[` in base;
    r79 = dyn __(z_sp5, i6);
    goto L42(r79);
  L191():
    p25 = prom<V +>{
      z_sp6 = ld `z.sp`;
      z_sp7 = force? z_sp6;
      checkMissing(z_sp7);
      return z_sp7;
    };
    p26 = prom<V +>{
      __1 = ld `[[`;
      __2 = force? __1;
      checkMissing(__2);
      return __2;
    };
    r82 = dyn vapply1(p25, p26, "", 3);
    check L192() else D47();
  L248():
    sym14 = ldf `is.na`;
    base14 = ldf `is.na` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L250() else L251();
  L249():
    r181 = dyn base13(<lang `<-`(iN, is.na(A.))>);
    goto L56(r181);
  D47():
    deopt 196 [r82];
  L57(r184):
    st iN = r184;
    any3 = ldf any in base;
    r186 = dyn any3(r184);
    check L254() else D79();
  L58():
    goto L60();
  L60():
    sym15 = ldf nzchar;
    base15 = ldf nzchar in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L261() else L262();
  L192():
    st `z.im` = r82;
    grep = ldf grep;
    check L193() else D48();
  L250():
    A_ = ld `A.`;
    check L252() else D77();
  L251():
    r183 = dyn base14(<sym A.>);
    goto L57(r183);
  L255():
    l19 = ld `A.`;
    c65 = `is.object`(l19);
    if c65 then L256() else L257("", l19);
  D48():
    deopt 199 [];
  D77():
    deopt 320 [A_];
  D79():
    deopt 326 [r186];
  L59(r190, dx27):
    st `A.` = dx27;
    goto L60();
  L61(r194):
    c66 = `as.logical`(r194);
    if c66 then L265() else L62(c66);
  L193():
    p27 = prom<V +>{
      z_im = ld `z.im`;
      z_im1 = force? z_im;
      checkMissing(z_im1);
      return z_im1;
    };
    r84 = dyn grep("i$", p27);
    check L194() else D49();
  L252():
    A_1 = force? A_;
    checkMissing(A_1);
    is_na2 = ldf `is.na` in base;
    r185 = dyn is_na2(A_1);
    check L253() else D78();
  L254():
    goto L56(r186);
  L256():
    dr22 = tryDispatchBuiltin.0("[<-", l19, "");
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L258() else L257("", dr22);
  L257(r188, l21):
    iN = ld iN;
    check L259() else D80();
  L261():
    big_mark9 = ld `big.mark`;
    check L263() else D81();
  L262():
    r193 = dyn base15(<sym big.mark>);
    goto L61(r193);
  D49():
    deopt 202 [r84];
  D78():
    deopt 323 [r185];
  D80():
    deopt 330 [r188, l21, "", iN];
  D81():
    deopt 338 [big_mark9];
  L62(c68):
    c75 = `as.logical`(c68);
    if c75 then L272() else L64();
  L194():
    st `has.i` = r84;
    sub1 = ldf sub;
    check L195() else D50();
  L253():
    goto L57(r185);
  L258():
    dx26 = getTryDispatchBuiltinValue(dr22);
    goto L59("", dx26);
  L259():
    iN1 = force? iN;
    ___3 = ldf `[<-` in base;
    r191 = dyn ___3(l21, "", iN1);
    goto L59(r188, r191);
  L263():
    big_mark10 = force? big_mark9;
    checkMissing(big_mark10);
    nzchar = ldf nzchar in base;
    r195 = dyn nzchar(big_mark10);
    check L264() else D82();
  L265():
    sym16 = ldf length;
    base16 = ldf length in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L266() else L267();
  D50():
    deopt 205 [];
  D82():
    deopt 341 [r195];
  L63(c71, r197):
    c72 = `as.logical`(r197);
    c73 = `&&`(c71, c72);
    goto L62(c73);
  L64():
    goto L66();
  L66():
    sym17 = ldf nzchar;
    base17 = ldf nzchar in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L280() else L281();
  L195():
    p28 = prom<V +>{
      z_im2 = ld `z.im`;
      z_im3 = force? z_im2;
      checkMissing(z_im3);
      c52 = `is.object`(z_im3);
      if c52 then L1() else L2(z_im3);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", z_im3);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(z_im5):
      has_i = ld `has.i`;
      has_i1 = force? has_i;
      __3 = ldf `[` in base;
      r85 = dyn __3(z_im5, has_i1);
      goto L0(r85);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r87 = dyn sub1("i$", "", p28);
    check L196() else D51();
  L264():
    goto L61(r195);
  L266():
    grep1 = ldf grep;
    check L268() else D83();
  L267():
    r196 = dyn base16(<lang `<-`(i.big, grep(paste0("[0-9]{", `+`(big.interval, 1), ",}"), B.))>);
    goto L63(c66, r196);
  L272():
    r205 = clos inner912049409;
    st revStr = r205;
    revStr = ldf revStr;
    check L273() else D86();
  D51():
    deopt 209 [r87];
  D83():
    deopt 345 [c66];
  D86():
    deopt 357 [];
  L67(r228):
    c78 = `as.logical`(r228);
    if c78 then L284() else L68(c78);
  L196():
    l = ld `z.im`;
    c53 = `is.object`(l);
    if c53 then L197() else L198(r87, l);
  L268():
    p49 = prom<V +>{
      paste2 = ldf paste0;
      p48 = prom<V +>{
        big_interval3 = ld `big.interval`;
        big_interval4 = force? big_interval3;
        checkMissing(big_interval4);
        r198 = `+`(big_interval4, 1);
        return r198;
      };
      r200 = dyn paste2("[0-9]{", p48, ",}");
      return r200;
    };
    p50 = prom<V +>{
      B_ = ld `B.`;
      B_1 = force? B_;
      checkMissing(B_1);
      return B_1;
    };
    r203 = dyn grep1(p49, p50);
    check L269() else D84();
  L273():
    p58 = prom<V +>{
      gsub = ldf gsub;
      p52 = prom<V +>{
        paste3 = ldf paste0;
        p51 = prom<V +>{
          big_interval5 = ld `big.interval`;
          big_interval6 = force? big_interval5;
          checkMissing(big_interval6);
          return big_interval6;
        };
        r207 = dyn paste3("([0-9]{", p51, "})\\B");
        return r207;
      };
      p55 = prom<V +>{
        paste4 = ldf paste0;
        p54 = prom<V +>{
          revStr1 = ldf revStr;
          p53 = prom<V +>{
            big_mark11 = ld `big.mark`;
            big_mark12 = force? big_mark11;
            checkMissing(big_mark12);
            return big_mark12;
          };
          r210 = dyn revStr1(p53);
          return r210;
        };
        r212 = dyn paste4("\\1", p54);
        return r212;
      };
      p57 = prom<V +>{
        revStr2 = ldf revStr;
        p56 = prom<V +>{
          B_2 = ld `B.`;
          B_3 = force? B_2;
          checkMissing(B_3);
          c76 = `is.object`(B_3);
          if c76 then L1() else L2(B_3);
        L0(dx29):
          return dx29;
        L1():
          dr24 = tryDispatchBuiltin.1("[", B_3);
          dc12 = getTryDispatchBuiltinDispatched(dr24);
          if dc12 then L3() else L2(dr24);
        L2(B_5):
          i_big = ld `i.big`;
          i_big1 = force? i_big;
          __17 = ldf `[` in base;
          r214 = dyn __17(B_5, i_big1);
          goto L0(r214);
        L3():
          dx28 = getTryDispatchBuiltinValue(dr24);
          goto L0(dx28);
        };
        r216 = dyn revStr2(p56);
        return r216;
      };
      r218 = dyn gsub(p52, p55, p57);
      return r218;
    };
    r220 = dyn revStr(p58);
    check L274() else D87();
  L280():
    small_mark5 = ld `small.mark`;
    check L282() else D89();
  L281():
    r227 = dyn base17(<sym small.mark>);
    goto L67(r227);
  D84():
    deopt 348 [c66, r203];
  D87():
    deopt 359 [r220];
  D89():
    deopt 369 [small_mark5];
  L43(dx5):
    st `z.im` = dx5;
    lapply = ldf lapply;
    check L201() else D53();
  L68(c80):
    c87 = `as.logical`(c80);
    if c87 then L291() else L70();
  L197():
    dr4 = tryDispatchBuiltin.0("[<-", l, r87);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L199() else L198(r87, dr4);
  L198(r89, l2):
    has_i2 = ld `has.i`;
    check L200() else D52();
  L269():
    st `i.big` = r203;
    length = ldf length in base;
    r204 = dyn length(r203);
    check L270() else D85();
  L274():
    l22 = ld `B.`;
    c77 = `is.object`(l22);
    if c77 then L275() else L276(r220, l22);
  L282():
    small_mark6 = force? small_mark5;
    checkMissing(small_mark6);
    nzchar1 = ldf nzchar in base;
    r229 = dyn nzchar1(small_mark6);
    check L283() else D90();
  L284():
    sym18 = ldf length;
    base18 = ldf length in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L285() else L286();
  D52():
    deopt 211 [r89, l2, r87, has_i2];
  D53():
    deopt 216 [];
  D85():
    deopt 351 [c66, r204];
  D90():
    deopt 372 [r229];
  L65(r224, dx31):
    st `B.` = dx31;
    goto L66();
  L69(c83, r231):
    c84 = `as.logical`(r231);
    c85 = `&&`(c83, c84);
    goto L68(c85);
  L70():
    goto L72();
  L72():
    drop0trailing7 = ld drop0trailing;
    check L299() else D97();
  L199():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L43(dx4);
  L200():
    has_i3 = force? has_i2;
    ___ = ldf `[<-` in base;
    r92 = dyn ___(l2, r87, has_i3);
    goto L43(r92);
  L201():
    p31 = prom<V +>{
      sym10 = ldf list;
      base10 = ldf list in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r94):
      return r94;
    L1():
      vapply2 = ldf vapply;
      p29 = prom<V +>{
        z_sp8 = ld `z.sp`;
        z_sp9 = force? z_sp8;
        checkMissing(z_sp9);
        return z_sp9;
      };
      p30 = prom<V +>{
        __4 = ld `[[`;
        __5 = force? __4;
        checkMissing(__5);
        return __5;
      };
      r97 = dyn vapply2(p29, p30, "", 1);
      z_im6 = ld `z.im`;
      z_im7 = force? z_im6;
      checkMissing(z_im7);
      list = ldf list in base;
      r98 = dyn list(r97, z_im7);
      goto L0(r98);
    L2():
      r93 = dyn base10(<lang vapply(z.sp, `[[`, "", 1)>, <sym z.im>);
      goto L0(r93);
    };
    p32 = prom<V +>{
      r100 = clos inner533430315;
      return r100;
    };
    r102 = dyn lapply(p31, p32);
    check L202() else D54();
  L270():
    goto L63(c66, r204);
  L275():
    dr26 = tryDispatchBuiltin.0("[<-", l22, r220);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L277() else L276(r220, dr26);
  L276(r222, l24):
    i_big2 = ld `i.big`;
    check L278() else D88();
  L283():
    goto L67(r229);
  L285():
    grep2 = ldf grep;
    check L287() else D91();
  L286():
    r230 = dyn base18(<lang `<-`(i.sml, grep(paste0("[0-9]{", `+`(small.interval, 1), ",}"), A.))>);
    goto L69(c78, r230);
  L291():
    gsub1 = ldf gsub;
    check L292() else D94();
  D54():
    deopt 219 [r102];
  D88():
    deopt 361 [r222, l24, r220, i_big2];
  D91():
    deopt 376 [c78];
  D94():
    deopt 385 [];
  D97():
    deopt 397 [drop0trailing7];
  L202():
    st r = r102;
    paste0 = ldf paste0;
    check L203() else D55();
  L277():
    dx30 = getTryDispatchBuiltinValue(dr26);
    goto L65(r220, dx30);
  L278():
    i_big3 = force? i_big2;
    ___4 = ldf `[<-` in base;
    r225 = dyn ___4(l24, r220, i_big3);
    goto L65(r222, r225);
  L287():
    p60 = prom<V +>{
      paste5 = ldf paste0;
      p59 = prom<V +>{
        small_interval3 = ld `small.interval`;
        small_interval4 = force? small_interval3;
        checkMissing(small_interval4);
        r232 = `+`(small_interval4, 1);
        return r232;
      };
      r234 = dyn paste5("[0-9]{", p59, ",}");
      return r234;
    };
    p61 = prom<V +>{
      A_2 = ld `A.`;
      A_3 = force? A_2;
      checkMissing(A_3);
      return A_3;
    };
    r237 = dyn grep2(p60, p61);
    check L288() else D92();
  L292():
    p63 = prom<V +>{
      paste6 = ldf paste0;
      p62 = prom<V +>{
        small_interval5 = ld `small.interval`;
        small_interval6 = force? small_interval5;
        checkMissing(small_interval6);
        return small_interval6;
      };
      r240 = dyn paste6("([0-9]{", p62, "}\\B)");
      return r240;
    };
    p65 = prom<V +>{
      paste7 = ldf paste0;
      p64 = prom<V +>{
        small_mark7 = ld `small.mark`;
        small_mark8 = force? small_mark7;
        checkMissing(small_mark8);
        return small_mark8;
      };
      r243 = dyn paste7("\\1", p64);
      return r243;
    };
    p66 = prom<V +>{
      A_4 = ld `A.`;
      A_5 = force? A_4;
      checkMissing(A_5);
      c88 = `is.object`(A_5);
      if c88 then L1() else L2(A_5);
    L0(dx33):
      return dx33;
    L1():
      dr28 = tryDispatchBuiltin.1("[", A_5);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L3() else L2(dr28);
    L2(A_7):
      i_sml = ld `i.sml`;
      i_sml1 = force? i_sml;
      __18 = ldf `[` in base;
      r245 = dyn __18(A_7, i_sml1);
      goto L0(r245);
    L3():
      dx32 = getTryDispatchBuiltinValue(dr28);
      goto L0(dx32);
    };
    r247 = dyn gsub1(p63, p65, p66);
    check L293() else D95();
  L299():
    drop0trailing8 = force? drop0trailing7;
    checkMissing(drop0trailing8);
    c90 = `as.logical`(drop0trailing8);
    if c90 then L300() else L73();
  D55():
    deopt 222 [];
  D92():
    deopt 379 [c78, r237];
  D95():
    deopt 389 [r247];
  L73():
    goto L82();
  L82():
    _format_zeros2 = ldf `.format.zeros`;
    check L337() else D115();
  L203():
    p33 = prom<V +>{
      r103 = ld r;
      r104 = force? r103;
      checkMissing(r104);
      c54 = `is.object`(r104);
      if c54 then L2() else L3(r104);
    L0(dx7):
      c55 = `is.object`(dx7);
      if c55 then L5() else L6(dx7);
    L2():
      dr6 = tryDispatchBuiltin.1("[[", r104);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L4() else L3(dr6);
    L3(r106):
      __6 = ldf `[[` in base;
      r107 = dyn __6(r106, 2.0);
      goto L0(r107);
    L1(dx11):
      return dx11;
    L4():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    L5():
      dr8 = tryDispatchBuiltin.1("[", dx7);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L7() else L6(dr8);
    L6(dx9):
      has_i4 = ld `has.i`;
      has_i5 = force? has_i4;
      __7 = ldf `[` in base;
      r108 = dyn __7(dx9, has_i5);
      goto L1(r108);
    L7():
      dx10 = getTryDispatchBuiltinValue(dr8);
      goto L1(dx10);
    };
    r110 = dyn paste0(p33, "i");
    check L204() else D56();
  L288():
    st `i.sml` = r237;
    length1 = ldf length in base;
    r238 = dyn length1(r237);
    check L289() else D93();
  L293():
    l25 = ld `A.`;
    c89 = `is.object`(l25);
    if c89 then L294() else L295(r247, l25);
  L300():
    A_8 = ld `A.`;
    check L301() else D98();
  D56():
    deopt 225 [r110];
  D93():
    deopt 382 [c78, r238];
  D98():
    deopt 399 [A_8];
  D115():
    deopt 467 [];
  L71(r251, dx35):
    st `A.` = dx35;
    goto L72();
  L204():
    l3 = ld r;
    c56 = `is.object`(l3);
    if c56 then L205() else L206(r110, l3, r110, l3);
  L289():
    goto L69(c78, r238);
  L294():
    dr30 = tryDispatchBuiltin.0("[<-", l25, r247);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L296() else L295(r247, dr30);
  L295(r249, l27):
    i_sml2 = ld `i.sml`;
    check L297() else D96();
  L301():
    A_9 = force? A_8;
    checkMissing(A_9);
    c91 = `is.object`(A_9);
    if c91 then L302() else L303(A_9);
  L337():
    p74 = prom<V +>{
      paste8 = ldf paste0;
      p71 = prom<V +>{
        B_6 = ld `B.`;
        B_7 = force? B_6;
        checkMissing(B_7);
        return B_7;
      };
      p72 = prom<V +>{
        sym21 = ldf c;
        base21 = ldf c in base;
        guard21 = `==`.4(sym21, base21);
        if guard21 then L2() else L3();
      L0(r291):
        c99 = `is.object`(r291);
        if c99 then L4() else L5(r291);
      L2():
        decimal_mark9 = ld `decimal.mark`;
        decimal_mark10 = force? decimal_mark9;
        checkMissing(decimal_mark10);
        c98 = ldf c in base;
        r292 = dyn c98(decimal_mark10, "");
        goto L0(r292);
      L3():
        r290 = dyn base21(<sym decimal.mark>, "");
        goto L0(r290);
      L1(dx49):
        return dx49;
      L4():
        dr44 = tryDispatchBuiltin.1("[", r291);
        dc22 = getTryDispatchBuiltinDispatched(dr44);
        if dc22 then L6() else L5(dr44);
      L5(r294):
        iN6 = ld iN;
        iN7 = force? iN6;
        checkMissing(iN7);
        r295 = `+`(iN7, 1);
        __22 = ldf `[` in base;
        r296 = dyn __22(r294, r295);
        goto L1(r296);
      L6():
        dx48 = getTryDispatchBuiltinValue(dr44);
        goto L1(dx48);
      };
      p73 = prom<V +>{
        A_14 = ld `A.`;
        A_15 = force? A_14;
        checkMissing(A_15);
        return A_15;
      };
      r299 = dyn paste8(p71, p72, p73);
      return r299;
    };
    p75 = prom<V +>{
      zero_print9 = ld `zero.print`;
      zero_print10 = force? zero_print9;
      checkMissing(zero_print10);
      return zero_print10;
    };
    p76 = prom<V +>{
      replace_zero5 = ld `replace.zero`;
      replace_zero6 = force? replace_zero5;
      checkMissing(replace_zero6);
      return replace_zero6;
    };
    r303 = dyn _format_zeros2[, , replace](p74, p75, p76);
    check L338() else D116();
  D96():
    deopt 391 [r249, l27, r247, i_sml2];
  D116():
    deopt 472 [r303];
  L44(r117, l9, r118, dx13):
    c57 = `is.object`(dx13);
    if c57 then L208() else L209(r117, l9, dx13);
  L74(dx37):
    st a = dx37;
    sym19 = ldf length;
    base19 = ldf length in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L306() else L307();
  L205():
    dr10 = tryDispatchBuiltin.1("[[", l3);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L207() else L206(r110, l3, r110, dr10);
  L206(r113, l6, r114, l7):
    __8 = ldf `[[` in base;
    r119 = dyn __8(l7, 2.0);
    goto L44(r113, l6, r114, r119);
  L296():
    dx34 = getTryDispatchBuiltinValue(dr30);
    goto L71(r247, dx34);
  L297():
    i_sml3 = force? i_sml2;
    ___5 = ldf `[<-` in base;
    r252 = dyn ___5(l27, r247, i_sml3);
    goto L71(r249, r252);
  L302():
    dr32 = tryDispatchBuiltin.1("[", A_9);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L304() else L303(dr32);
  L303(A_11):
    iN2 = ld iN;
    check L305() else D99();
  L338():
    st `A.` = r303;
    preserve_width3 = ld `preserve.width`;
    check L339() else D117();
  D99():
    deopt 401 [A_11, iN2];
  D117():
    deopt 474 [preserve_width3];
  L45(r123, l13, dx17):
    c58 = `is.object`(l13);
    if c58 then L212() else L213(r123, l13);
  L75(r257):
    c92 = `as.logical`(r257);
    if c92 then L311() else L76();
  L207():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L44(r110, l3, r110, dx12);
  L208():
    dr12 = tryDispatchBuiltin.0("[<-", dx13, r118);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L210() else L209(r117, l9, dr12);
  L209(r121, l11, dx15):
    has_i6 = ld `has.i`;
    check L211() else D57();
  L304():
    dx36 = getTryDispatchBuiltinValue(dr32);
    goto L74(dx36);
  L305():
    iN3 = force? iN2;
    checkMissing(iN3);
    r254 = `!`(iN3);
    __19 = ldf `[` in base;
    r255 = dyn __19(A_11, r254);
    goto L74(r255);
  L306():
    grep3 = ldf grep;
    check L308() else D100();
  L307():
    r256 = dyn base19(<lang `<-`(hasE, grep("e", a, fixed=TRUE))>);
    goto L75(r256);
  L339():
    preserve_width4 = force? preserve_width3;
    checkMissing(preserve_width4);
    r304 = `!=`(preserve_width4, "none");
    c100 = `as.logical`(r304);
    if c100 then L340() else L83();
  D57():
    deopt 232 [r121, l11, dx15, r118, has_i6];
  D100():
    deopt 409 [];
  L46(dx19):
    st r = dx19;
    paste1 = ldf paste0;
    check L215() else D58();
  L76():
    sub4 = ldf sub;
    check L325() else D109();
  L79():
    a12 = ld a;
    check L327() else D111();
  L83():
    goto L94();
  L94():
    sym25 = ldf attributes;
    base25 = ldf attributes in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L379() else L380();
  L210():
    dx16 = getTryDispatchBuiltinValue(dr12);
    goto L45(r117, l9, dx16);
  L211():
    has_i7 = force? has_i6;
    ___1 = ldf `[<-` in base;
    r124 = dyn ___1(dx15, r118, has_i7);
    goto L45(r121, l11, r124);
  L212():
    dr14 = tryDispatchBuiltin.0("[[<-", l13, dx17);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L214() else L213(r123, dr14);
  L213(r126, l15):
    ____ = ldf `[[<-` in base;
    r129 = dyn ____(l15, dx17, 2.0);
    goto L46(r129);
  L308():
    p67 = prom<V +>{
      a = ld a;
      a1 = force? a;
      checkMissing(a1);
      return a1;
    };
    r259 = dyn grep3[, , fixed]("e", p67, TRUE);
    check L309() else D101();
  L311():
    sub2 = ldf sub;
    check L312() else D103();
  L340():
    sym22 = ldf nchar;
    base22 = ldf nchar in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L341() else L342();
  D58():
    deopt 240 [];
  D101():
    deopt 414 [r259];
  D103():
    deopt 419 [];
  D109():
    deopt 442 [];
  D111():
    deopt 448 [a12];
  L84(r306):
    st nnc = r306;
    nnc = ld nnc;
    check L345() else D120();
  L95(r333):
    l40 = ld `A.`;
    attributes__ = ldf `attributes<-`;
    check L383() else D133();
  L214():
    dx18 = getTryDispatchBuiltinValue(dr14);
    goto L46(dx18);
  L215():
    p34 = prom<V +>{
      r130 = ld r;
      r131 = force? r130;
      checkMissing(r131);
      c59 = `is.object`(r131);
      if c59 then L1() else L2(r131);
    L0(dx21):
      return dx21;
    L1():
      dr16 = tryDispatchBuiltin.1("[[", r131);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(r133):
      __9 = ldf `[[` in base;
      r134 = dyn __9(r133, 1.0);
      goto L0(r134);
    L3():
      dx20 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx20);
    };
    p37 = prom<V +>{
      vapply3 = ldf vapply;
      p35 = prom<V +>{
        z_sp10 = ld `z.sp`;
        z_sp11 = force? z_sp10;
        checkMissing(z_sp11);
        return z_sp11;
      };
      p36 = prom<V +>{
        __10 = ld `[[`;
        __11 = force? __10;
        checkMissing(__11);
        return __11;
      };
      r138 = dyn vapply3(p35, p36, "", 2);
      return r138;
    };
    p38 = prom<V +>{
      r140 = ld r;
      r141 = force? r140;
      checkMissing(r141);
      c60 = `is.object`(r141);
      if c60 then L1() else L2(r141);
    L0(dx23):
      return dx23;
    L1():
      dr18 = tryDispatchBuiltin.1("[[", r141);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(r143):
      __12 = ldf `[[` in base;
      r144 = dyn __12(r143, 2.0);
      goto L0(r144);
    L3():
      dx22 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx22);
    };
    r146 = dyn paste1(p34, p37, p38);
    check L216() else D59();
  L309():
    st hasE = r259;
    length2 = ldf length in base;
    r260 = dyn length2(r259);
    check L310() else D102();
  L312():
    p68 = prom<V +>{
      a2 = ld a;
      a3 = force? a2;
      checkMissing(a3);
      c93 = `is.object`(a3);
      if c93 then L1() else L2(a3);
    L0(dx39):
      return dx39;
    L1():
      dr34 = tryDispatchBuiltin.1("[", a3);
      dc17 = getTryDispatchBuiltinDispatched(dr34);
      if dc17 then L3() else L2(dr34);
    L2(a5):
      hasE = ld hasE;
      hasE1 = force? hasE;
      __20 = ldf `[` in base;
      r261 = dyn __20(a5, hasE1);
      goto L0(r261);
    L3():
      dx38 = getTryDispatchBuiltinValue(dr34);
      goto L0(dx38);
    };
    r263 = dyn sub2("e[+-]0+$", "", p68);
    check L313() else D104();
  L325():
    p70 = prom<V +>{
      a10 = ld a;
      a11 = force? a10;
      checkMissing(a11);
      return a11;
    };
    r281 = dyn sub4("0+$", "", p70);
    check L326() else D110();
  L327():
    a13 = force? a12;
    checkMissing(a13);
    l34 = ld `A.`;
    c97 = `is.object`(l34);
    if c97 then L328() else L329(a13, l34);
  L341():
    A_16 = ld `A.`;
    check L343() else D118();
  L342():
    r305 = dyn base22(<sym A.>, "c");
    goto L84(r305);
  L379():
    x27 = ld x;
    check L381() else D131();
  L380():
    r332 = dyn base25(<sym x>);
    goto L95(r332);
  D59():
    deopt 244 [r146];
  D102():
    deopt 417 [r260];
  D104():
    deopt 423 [r263];
  D110():
    deopt 446 [r281];
  D118():
    deopt 480 [A_16];
  D120():
    deopt 488 [nnc];
  D131():
    deopt 538 [x27];
  D133():
    deopt 543 [r333, l40, r333];
  L80(dx47):
    st `A.` = dx47;
    sym20 = ldf nzchar;
    base20 = ldf nzchar in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L332() else L333();
  L216():
    l16 = ld x;
    c61 = `is.object`(l16);
    if c61 then L217() else L218(r146, l16);
  L310():
    goto L75(r260);
  L313():
    l28 = ld a;
    c94 = `is.object`(l28);
    if c94 then L314() else L315(r263, l28);
  L326():
    st a = r281;
    goto L79();
  L328():
    dr42 = tryDispatchBuiltin.0("[<-", l34, a13);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L330() else L329(a13, dr42);
  L329(a15, l36):
    iN4 = ld iN;
    check L331() else D112();
  L343():
    A_17 = force? A_16;
    checkMissing(A_17);
    nchar1 = ldf nchar in base;
    r307 = dyn nchar1(A_17, "c", FALSE, NA_LGL);
    check L344() else D119();
  L345():
    nnc1 = force? nnc;
    checkMissing(nnc1);
    sym23 = ldf nchar;
    base23 = ldf nchar in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L346() else L347();
  L381():
    x28 = force? x27;
    checkMissing(x28);
    attributes = ldf attributes in base;
    r334 = dyn attributes(x28);
    check L382() else D132();
  L383():
    r335 = dyn attributes__(l40, NULL, r333);
    check L384() else D134();
  D112():
    deopt 451 [a15, l36, a13, iN4];
  D119():
    deopt 486 [r307];
  D132():
    deopt 541 [r334];
  D134():
    deopt 545 [r333, r335];
  L47(r150, dx25):
    st x = dx25;
    goto L48();
  L77(dx41):
    st a = dx41;
    sub3 = ldf sub;
    check L318() else D106();
  L81(r285):
    r287 = `!`(r285);
    st iN = r287;
    goto L82();
  L85(nnc4, r309):
    r311 = `-`(nnc4, r309);
    st `d.len` = r311;
    sym24 = ldf any;
    base24 = ldf any in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L350() else L351();
  L217():
    dr20 = tryDispatchBuiltin.0("[<-", l16, r146);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L219() else L218(r146, dr20);
  L218(r148, l18):
    i7 = ld i3;
    check L220() else D60();
  L314():
    dr36 = tryDispatchBuiltin.0("[<-", l28, r263);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L316() else L315(r263, dr36);
  L315(r265, l30):
    hasE2 = ld hasE;
    check L317() else D105();
  L330():
    dx46 = getTryDispatchBuiltinValue(dr42);
    goto L80(dx46);
  L331():
    iN5 = force? iN4;
    checkMissing(iN5);
    r282 = `!`(iN5);
    ___8 = ldf `[<-` in base;
    r283 = dyn ___8(l36, a13, r282);
    goto L80(r283);
  L332():
    A_12 = ld `A.`;
    check L334() else D113();
  L333():
    r284 = dyn base20(<sym A.>);
    goto L81(r284);
  L344():
    goto L84(r307);
  L346():
    x25 = ld x;
    check L348() else D121();
  L347():
    r308 = dyn base23(<sym x>, "c");
    goto L85(nnc1, r308);
  L382():
    goto L95(r334);
  L384():
    st `A.` = r335;
    l41 = ld `A.`;
    class__ = ldf `class<-`;
    check L385() else D135();
  D60():
    deopt 246 [r148, l18, r146, i7];
  D105():
    deopt 425 [r265, l30, r263, hasE2];
  D106():
    deopt 430 [];
  D113():
    deopt 458 [A_12];
  D121():
    deopt 491 [nnc1, x25];
  D135():
    deopt 550 [NULL, l41, NULL];
  L86(r313):
    c101 = `as.logical`(r313);
    if c101 then L354() else L87();
  L219():
    dx24 = getTryDispatchBuiltinValue(dr20);
    goto L47(r146, dx24);
  L220():
    i8 = force? i7;
    ___2 = ldf `[<-` in base;
    r151 = dyn ___2(l18, r146, i8);
    goto L47(r148, r151);
  L316():
    dx40 = getTryDispatchBuiltinValue(dr36);
    goto L77(dx40);
  L317():
    hasE3 = force? hasE2;
    ___6 = ldf `[<-` in base;
    r268 = dyn ___6(l30, r263, hasE3);
    goto L77(r268);
  L318():
    p69 = prom<V +>{
      a6 = ld a;
      a7 = force? a6;
      checkMissing(a7);
      c95 = `is.object`(a7);
      if c95 then L1() else L2(a7);
    L0(dx43):
      return dx43;
    L1():
      dr38 = tryDispatchBuiltin.1("[", a7);
      dc19 = getTryDispatchBuiltinDispatched(dr38);
      if dc19 then L3() else L2(dr38);
    L2(a9):
      hasE4 = ld hasE;
      hasE5 = force? hasE4;
      checkMissing(hasE5);
      r269 = `-`(<missing>, hasE5);
      __21 = ldf `[` in base;
      r270 = dyn __21(a9, r269);
      goto L0(r270);
    L3():
      dx42 = getTryDispatchBuiltinValue(dr38);
      goto L0(dx42);
    };
    r272 = dyn sub3("0+$", "", p69);
    check L319() else D107();
  L334():
    A_13 = force? A_12;
    checkMissing(A_13);
    nzchar2 = ldf nzchar in base;
    r286 = dyn nzchar2(A_13);
    check L335() else D114();
  L348():
    x26 = force? x25;
    checkMissing(x26);
    nchar2 = ldf nchar in base;
    r310 = dyn nchar2(x26, "c", FALSE, NA_LGL);
    check L349() else D122();
  L350():
    d_len = ld `d.len`;
    check L352() else D123();
  L351():
    r312 = dyn base24(<lang `<-`(ii, `>`(d.len, 0))>);
    goto L86(r312);
  L385():
    r336 = dyn class__(l41, NULL, NULL);
    check L386() else D136();
  D107():
    deopt 434 [r272];
  D114():
    deopt 461 [r286];
  D122():
    deopt 497 [nnc1, r310];
  D123():
    deopt 502 [d_len];
  D136():
    deopt 552 [NULL, r336];
  L87():
    goto L93(NULL);
  L93(r330):
    goto L94();
  L319():
    l31 = ld a;
    c96 = `is.object`(l31);
    if c96 then L320() else L321(r272, l31);
  L335():
    goto L81(r286);
  L349():
    goto L85(nnc1, r310);
  L352():
    d_len1 = force? d_len;
    checkMissing(d_len1);
    r314 = `>`(d_len1, 0);
    st ii = r314;
    any4 = ldf any in base;
    r315 = dyn any4(r314);
    check L353() else D124();
  L354():
    preserve_width5 = ld `preserve.width`;
    check L355() else D125();
  L386():
    st `A.` = r336;
    A_20 = ld `A.`;
    check L387() else D137();
  D124():
    deopt 508 [r315];
  D125():
    deopt 509 [preserve_width5];
  D137():
    deopt 554 [A_20];
  L78(r276, dx45):
    st a = dx45;
    goto L79();
  L320():
    dr40 = tryDispatchBuiltin.0("[<-", l31, r272);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L322() else L321(r272, dr40);
  L321(r274, l33):
    hasE6 = ld hasE;
    check L323() else D108();
  L353():
    goto L86(r315);
  L355():
    preserve_width6 = force? preserve_width5;
    checkMissing(preserve_width6);
    c102 = `is.vector`(preserve_width6, "any");
    if c102 then L356() else L357();
  L387():
    A_21 = force? A_20;
    checkMissing(A_21);
    popenv;
    return A_21;
  D108():
    deopt 436 [r274, l33, r272, hasE6];
  L322():
    dx44 = getTryDispatchBuiltinValue(dr40);
    goto L78(r272, dx44);
  L323():
    hasE7 = force? hasE6;
    checkMissing(hasE7);
    r277 = `-`(<missing>, hasE7);
    ___7 = ldf `[<-` in base;
    r278 = dyn ___7(l33, r272, r277);
    goto L78(r274, r278);
  L356():
    c103 = inherits(preserve_width6, "factor", FALSE);
    if c103 then L358() else L359();
  L357():
    stop(<dot "EXPR must be a length 1 vector">, TRUE, NULL);
    unreachable;
  L358():
    c104 = `is.character`(preserve_width6);
    if c104 then L360() else L361();
  L359():
    warning(<dot "EXPR is a \"factor\", treated as integer.\n Consider using 'switch(as.character( * ), ...)' instead.">, TRUE, FALSE, FALSE, NULL);
    goto L358();
  L88():
    vapply6 = ldf vapply;
    check L367() else D126();
  L89():
    format2 = ldf format;
    check L374() else D129();
  L90():
    goto L91(NULL);
  L91(r316):
    goto L93(r316);
  L360():
    c105 = `==`.6(preserve_width6, "individual");
    if c105 then L88() else L362();
  L361():
    i_ddd = dots[preserve_width6];
    i9 = `as.integer`(i_ddd);
    c107 = `==`.5(i9, 1);
    if c107 then L88() else L364();
  D126():
    deopt 514 [];
  D129():
    deopt 525 [];
  L362():
    c106 = `==`.6(preserve_width6, "common");
    if c106 then L89() else L363();
  L364():
    c108 = `==`.5(i9, 2);
    if c108 then L89() else L365();
  L367():
    p78 = prom<V +>{
      which = ldf which;
      p77 = prom<V +>{
        ii = ld ii;
        ii1 = force? ii;
        checkMissing(ii1);
        return ii1;
      };
      r318 = dyn which(p77);
      return r318;
    };
    p79 = prom<V +>{
      r320 = clos inner854741286;
      return r320;
    };
    r322 = dyn vapply6(p78, p79, "");
    check L368() else D127();
  L374():
    p80 = prom<V +>{
      A_18 = ld `A.`;
      A_19 = force? A_18;
      checkMissing(A_19);
      return A_19;
    };
    r329 = dyn format2[, justify](p80, "right");
    check L375() else D130();
  D127():
    deopt 518 [r322];
  D130():
    deopt 529 [r329];
  L363():
    goto L90();
  L365():
    goto L90();
  L368():
    l37 = ld `A.`;
    c109 = `is.object`(l37);
    if c109 then L369() else L370(r322, l37);
  L375():
    st `A.` = r329;
    goto L91(r329);
  L92(r326, dx51):
    st `A.` = dx51;
    goto L91(r326);
  L369():
    dr46 = tryDispatchBuiltin.0("[<-", l37, r322);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L371() else L370(r322, dr46);
  L370(r324, l39):
    ii2 = ld ii;
    check L372() else D128();
  D128():
    deopt 520 [r324, l39, r322, ii2];
  L371():
    dx50 = getTryDispatchBuiltinValue(dr46);
    goto L92(r322, dx50);
  L372():
    ii3 = force? ii2;
    ___9 = ldf `[<-` in base;
    r327 = dyn ___9(l39, r322, ii3);
    goto L92(r324, r327);
  }
}
fun inner533430315(`.`) {
  (reg __:*) -+> V { var `.`:*, reg prettyNum:cls, reg __1:*, reg __2:V, reg p:p(V +), reg big_mark:*, reg big_mark1:V, reg p1:p(V +), reg big_interval:*, reg big_interval1:V, reg p2:p(V +), reg small_mark:*, reg small_mark1:V, reg p3:p(V +), reg small_interval:*, reg small_interval1:V, reg p4:p(V +), reg decimal_mark:*, reg decimal_mark1:V, reg p5:p(V +), reg input_d_mark:*, reg input_d_mark1:V, reg p6:p(V +), reg preserve_width:*, reg preserve_width1:V, reg p7:p(V +), reg zero_print:*, reg zero_print1:V, reg p8:p(V +), reg replace_zero:*, reg replace_zero1:V, reg p9:p(V +), reg drop0trailing:*, reg drop0trailing1:V, reg p10:p(V +), reg ddd:*, reg r11:V |
    mkenv;
    st `.` = __;
    prettyNum = ldf prettyNum;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      __1 = ld `.`;
      __2 = force? __1;
      checkMissing(__2);
      return __2;
    };
    p1 = prom<V +>{
      big_mark = ld `big.mark`;
      big_mark1 = force? big_mark;
      checkMissing(big_mark1);
      return big_mark1;
    };
    p2 = prom<V +>{
      big_interval = ld `big.interval`;
      big_interval1 = force? big_interval;
      checkMissing(big_interval1);
      return big_interval1;
    };
    p3 = prom<V +>{
      small_mark = ld `small.mark`;
      small_mark1 = force? small_mark;
      checkMissing(small_mark1);
      return small_mark1;
    };
    p4 = prom<V +>{
      small_interval = ld `small.interval`;
      small_interval1 = force? small_interval;
      checkMissing(small_interval1);
      return small_interval1;
    };
    p5 = prom<V +>{
      decimal_mark = ld `decimal.mark`;
      decimal_mark1 = force? decimal_mark;
      checkMissing(decimal_mark1);
      return decimal_mark1;
    };
    p6 = prom<V +>{
      input_d_mark = ld `input.d.mark`;
      input_d_mark1 = force? input_d_mark;
      checkMissing(input_d_mark1);
      return input_d_mark1;
    };
    p7 = prom<V +>{
      preserve_width = ld `preserve.width`;
      preserve_width1 = force? preserve_width;
      checkMissing(preserve_width1);
      return preserve_width1;
    };
    p8 = prom<V +>{
      zero_print = ld `zero.print`;
      zero_print1 = force? zero_print;
      checkMissing(zero_print1);
      return zero_print1;
    };
    p9 = prom<V +>{
      replace_zero = ld `replace.zero`;
      replace_zero1 = force? replace_zero;
      checkMissing(replace_zero1);
      return replace_zero1;
    };
    p10 = prom<V +>{
      drop0trailing = ld drop0trailing;
      drop0trailing1 = force? drop0trailing;
      checkMissing(drop0trailing1);
      return drop0trailing1;
    };
    ddd = ld `...`;
    r11 = dyn prettyNum[, `big.mark`, `big.interval`, `small.mark`, `small.interval`, `decimal.mark`, `input.d.mark`, `preserve.width`, `zero.print`, `replace.zero`, drop0trailing, `is.cmplx`, `...`](p, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, FALSE, ddd);
    check L1() else D1();
  D1():
    deopt 26 [r11];
  L1():
    popenv;
    return r11;
  }
}
fun inner1268674652(xs) {
  (reg xs:*) -+> V { var xs:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg xs1:*, reg xs2:V, reg length:cls, reg r2:V, reg lx:*, reg lx1:V, reg r3:V, reg c:L, reg xs3:*, reg xs4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg paste:cls, reg xs5:*, reg xs6:V, reg c1:L, reg xs8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg lx2:*, reg lx3:V, reg r6:V, reg __:cls, reg r7:V, reg p:p(V +), reg input_d_mark:*, reg input_d_mark1:V, reg p1:p(V +), reg r10:V, reg xs9:*, reg xs10:V, reg c2:L, reg xs12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg lx4:*, reg lx5:V, reg __1:cls, reg r11:V, reg c3:cls, reg r12:V |
    mkenv;
    st xs = xs;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    st lx = r1;
    lx = ld lx;
    check L8() else D2();
  L4():
    xs1 = ld xs;
    check L6() else D0();
  L5():
    r = dyn base(<sym xs>);
    goto L0(r);
  D0():
    deopt 2 [xs1];
  D2():
    deopt 7 [lx];
  L6():
    xs2 = force? xs1;
    checkMissing(xs2);
    length = ldf length in base;
    r2 = dyn length(xs2);
    check L7() else D1();
  L8():
    lx1 = force? lx;
    checkMissing(lx1);
    r3 = `<=`(lx1, 2.0);
    c = `as.logical`(r3);
    if c then L9() else L1();
  D1():
    deopt 5 [r2];
  L1():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L7():
    goto L0(r2);
  L9():
    xs3 = ld xs;
    check L10() else D3();
  D3():
    deopt 11 [xs3];
  L2(r5):
    popenv;
    return r5;
  L10():
    xs4 = force? xs3;
    checkMissing(xs4);
    popenv;
    return xs4;
  L12():
    paste = ldf paste;
    check L14() else D4();
  L13():
    r4 = dyn base1(<lang paste(`[`(xs, `-`(lx)), collapse=input.d.mark)>, <lang `[`(xs, lx)>);
    goto L2(r4);
  D4():
    deopt 16 [];
  L14():
    p = prom<V +>{
      xs5 = ld xs;
      xs6 = force? xs5;
      checkMissing(xs6);
      c1 = `is.object`(xs6);
      if c1 then L1() else L2(xs6);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", xs6);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(xs8):
      lx2 = ld lx;
      lx3 = force? lx2;
      checkMissing(lx3);
      r6 = `-`(<missing>, lx3);
      __ = ldf `[` in base;
      r7 = dyn __(xs8, r6);
      goto L0(r7);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p1 = prom<V +>{
      input_d_mark = ld `input.d.mark`;
      input_d_mark1 = force? input_d_mark;
      checkMissing(input_d_mark1);
      return input_d_mark1;
    };
    r10 = dyn paste[, collapse](p, p1);
    check L15() else D5();
  D5():
    deopt 20 [r10];
  L15():
    xs9 = ld xs;
    check L16() else D6();
  D6():
    deopt 21 [xs9];
  L16():
    xs10 = force? xs9;
    checkMissing(xs10);
    c2 = `is.object`(xs10);
    if c2 then L17() else L18(xs10);
  L3(dx3):
    c3 = ldf c in base;
    r12 = dyn c3(r10, dx3);
    check L21() else D8();
  L17():
    dr2 = tryDispatchBuiltin.1("[", xs10);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L19() else L18(dr2);
  L18(xs12):
    lx4 = ld lx;
    check L20() else D7();
  D7():
    deopt 23 [xs12, lx4];
  D8():
    deopt 27 [r12];
  L19():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(dx2);
  L20():
    lx5 = force? lx4;
    __1 = ldf `[` in base;
    r11 = dyn __1(xs12, lx5);
    goto L3(r11);
  L21():
    goto L2(r12);
  }
}
fun inner912049409(cc) {
  (reg cc:*) -+> V { var cc:*, reg vapply:cls, reg lapply:cls, reg strsplit:cls, reg cc1:*, reg cc2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg rev:*, reg rev1:V, reg p2:p(V +), reg r4:V, reg p3:p(V +), reg paste:*, reg paste1:V, reg p4:p(V +), reg r7:V |
    mkenv;
    st cc = cc;
    vapply = ldf vapply;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p3 = prom<V +>{
      lapply = ldf lapply;
      p1 = prom<V +>{
        strsplit = ldf strsplit;
        p = prom<V +>{
          cc1 = ld cc;
          cc2 = force? cc1;
          checkMissing(cc2);
          return cc2;
        };
        r1 = dyn strsplit(p, NULL);
        return r1;
      };
      p2 = prom<V +>{
        rev = ld rev;
        rev1 = force? rev;
        checkMissing(rev1);
        return rev1;
      };
      r4 = dyn lapply(p1, p2);
      return r4;
    };
    p4 = prom<V +>{
      paste = ld paste;
      paste1 = force? paste;
      checkMissing(paste1);
      return paste1;
    };
    r7 = dyn vapply[, , , collapse](p3, p4, "", "");
    check L1() else D1();
  D1():
    deopt 7 [r7];
  L1():
    popenv;
    return r7;
  }
}
fun inner854741286(i) {
  (reg i:*) -+> V { var i:*, reg sub:cls, reg sprintf:cls, reg d_len:*, reg d_len1:V, reg c:L, reg d_len3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i1:*, reg i2:V, reg __:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg A_:*, reg A_1:V, reg c1:L, reg A_3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i3:*, reg i4:V, reg __1:cls, reg r4:V, reg p2:p(V +), reg r6:V |
    mkenv;
    st i = i;
    sub = ldf sub;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      sprintf = ldf sprintf;
      p = prom<V +>{
        d_len = ld `d.len`;
        d_len1 = force? d_len;
        checkMissing(d_len1);
        c = `is.object`(d_len1);
        if c then L1() else L2(d_len1);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("[", d_len1);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(d_len3):
        i1 = ld i;
        i2 = force? i1;
        __ = ldf `[` in base;
        r = dyn __(d_len3, i2);
        goto L0(r);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r2 = dyn sprintf("^ {1,%d}", p);
      return r2;
    };
    p2 = prom<V +>{
      A_ = ld `A.`;
      A_1 = force? A_;
      checkMissing(A_1);
      c1 = `is.object`(A_1);
      if c1 then L1() else L2(A_1);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", A_1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(A_3):
      i3 = ld i;
      i4 = force? i3;
      __1 = ldf `[` in base;
      r4 = dyn __1(A_3, i4);
      goto L0(r4);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r6 = dyn sub(p1, "", p2);
    check L1() else D1();
  D1():
    deopt 5 [r6];
  L1():
    popenv;
    return r6;
  }
}