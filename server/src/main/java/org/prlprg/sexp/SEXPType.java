package org.prlprg.sexp;

import org.prlprg.parseprint.EnumSerialCaseIs;
import org.prlprg.util.StringCase;

/**
 * SEXP type returned by R {@code typeof}.
 *
 * <p>SEXPTYPEs are fixed in GNU-R: we can represent SEXPs of custom types on the server, but they
 * have to be converted to something like external pointers if we have a client using the GNU-R
 * runtime (which is the only planned runtime). Furthermore, we don't refine existing SEXPTypes even
 * when we refine the SEXP class: e.g. {@link ScalarIntSXP} has the same SEXPType as any other int
 * vector since the SEXPType for all int vectors is {@code INT}. Therefore it's important to
 * distinguish {@link SEXP#type} from the SEXP's class.
 *
 * <p>These also only represent GNU-R SEXPTYPEs you can expect to see in regular code: no foreign
 * types, no GC types, and no corrupted types. If you want to represent an arbitrary (aka possibly
 * malformed) GNU-R SEXPTYPE just use {@code int}.
 */
@EnumSerialCaseIs(StringCase.SNAKE)
public enum SEXPType implements SEXPOrEnvType {
  /** nil = NULL */
  NIL(0),
  /** symbols */
  SYM(1),
  /** lists of dotted pairs */
  LIST(2),
  /** closures */
  CLO(3),
  /** environments */
  ENV(4),
  /** promises: [un]evaluated closure arguments */
  PROM(5),
  /** language constructs (special lists) */
  LANG(6),
  /** special forms */
  SPECIAL(7),
  /** builtin non-special forms */
  BUILTIN(8),
  /** "scalar" string type (internal only) */
  CHAR(9),
  /** logical vectors */
  LGL(10),
  /** integer vectors */
  INT(13),
  /** real variables */
  REAL(14),
  /** complex variables */
  CPLX(15),
  /** string vectors */
  STR(16),
  /** dot-dot-dot object */
  DOT(17),
  /** make "any" args work */
  ANY(18),
  /** generic vectors */
  VEC(19),
  /** expressions vectors */
  EXPR(20),
  /** byte code */
  BCODE(21),
  /** external pointer */
  EXTPTR(22),
  /** weak reference */
  WEAKREF(23),
  /** raw bytes */
  RAW(24),
  /** S4 non-vector */
  S4(25);

  // These types are in GNU-R but they should never actually show up unless something's seriously
  // wrong.
  // /** fresh node created in new page */
  // NEW(30),
  // /** node released by GC */
  // FREE(31),
  // /** closure, builtin, special */
  // FUN(99);

  /** The integer which represents this type in GNU-R */
  public final int i;

  SEXPType(int i) {
    this.i = i;
  }

  /** Return the SEXP type represented by the given integer value. */
  public static SEXPType valueOf(int i) {
    // These will never change so we don't have to worry about code synchronization
    return switch (i) {
      case 0 -> NIL;
      case 1 -> SYM;
      case 2 -> LIST;
      case 3 -> CLO;
      case 4 -> ENV;
      case 5 -> PROM;
      case 6 -> LANG;
      case 7 -> SPECIAL;
      case 8 -> BUILTIN;
      case 9 -> CHAR;
      case 10 -> LGL;
      case 13 -> INT;
      case 14 -> REAL;
      case 15 -> CPLX;
      case 16 -> STR;
      case 17 -> DOT;
      case 18 -> ANY;
      case 19 -> VEC;
      case 20 -> EXPR;
      case 21 -> BCODE;
      case 22 -> EXTPTR;
      case 23 -> WEAKREF;
      case 24 -> RAW;
      case 25 -> S4;
        // case 30 -> NEW;
        // case 31 -> FREE;
        // case 99 -> FUN;
      default -> throw new IllegalArgumentException("Unknown SEXP type: " + i);
    };
  }

  /** Is this a primitive vector type? */
  public boolean isPrimitiveVector() {
    return switch (this) {
      case NIL,
              LIST,
              SYM,
              LANG,
              CLO,
              PROM,
              EXTPTR,
              WEAKREF,
              ENV,
              SPECIAL,
              BUILTIN,
              S4,
              BCODE,
              DOT,
              ANY,
              VEC,
              EXPR ->
          false;
      case CHAR, LGL, INT, REAL, CPLX, STR, RAW -> true;
    };
  }
}
