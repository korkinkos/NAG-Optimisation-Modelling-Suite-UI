// Header for nagcpp::opt::handle_set_quadobj (e04rf)

// Copyright 2022, Numerical Algorithms Group Ltd, Oxford, UK.
// Generated by cpp-ft-wrapper.xsl
// Version 28.5.0.0
#ifndef NAGCPP_E04RF_HPP
#define NAGCPP_E04RF_HPP

#include "utility/nagcpp_consts.hpp"
#include "utility/nagcpp_data_handling.hpp"
#include "utility/nagcpp_engine_routines.hpp"
#include "utility/nagcpp_engine_types.hpp"
#include "utility/nagcpp_error_handler.hpp"
#include "utility/nagcpp_utility_comm.hpp"
#include "utility/nagcpp_utility_optional.hpp"

namespace nagcpp {
  namespace opt {
    // handle_set_quadobj (e04rf)
    // Define a linear or a quadratic objective function to a problem initialized
    // by opt::handle_init (e04ra).
    // opt::handle_set_quadobj (e04rf) is a part of the NAG optimization modelling
    // suite and defines or redefines the objective function of the problem to be
    // linear or quadratic.

    // parameters:
    //   comm: opt::CommE04RA, scalar
    //     Communication structure.
    //     An object of either the derived class opt::CommE04RA or its base class
    //     utility::NoneCopyableComm can be supplied.
    //     It is recommended that the derived class is used. If the base class is
    //     supplied it must
    //     first be initialized via a call to opt::handle_init (e04ra).
    //   idxc: types::f77_integer, array, shape(nnzc)
    //     The nonzero elements of the sparse vector c
    //   c: double, array, shape(nnzc)
    //     The nonzero elements of the sparse vector c
    //   irowh: types::f77_integer, array, shape(nnzh)
    //     Arrays irowh, icolh and h store the nonzeros of the upper triangle of the
    //     matrix H in coordinate storage (CS) format (see the F11 Introduction)
    //   icolh: types::f77_integer, array, shape(nnzh)
    //     Arrays irowh, icolh and h store the nonzeros of the upper triangle of the
    //     matrix H in coordinate storage (CS) format (see the F11 Introduction)
    //   h: double, array, shape(nnzh)
    //     Arrays irowh, icolh and h store the nonzeros of the upper triangle of the
    //     matrix H in coordinate storage (CS) format (see the F11 Introduction)
    //   opt: opt::OptionalE04RF
    //     Optional parameter container, derived from utility::Optional.
    //     contains:
    //       fail: error_handler::ErrorHandler

    // error_handler::ErrorException
    //   (errorid 1)
    //     comm.handle has not been initialized.
    //   (errorid 1)
    //     comm.handle does not belong to the NAG optimization modelling suite,
    //     has not been initialized properly or is corrupted.
    //   (errorid 1)
    //     comm.handle has not been initialized properly or is corrupted.
    //   (errorid 2)
    //     The problem cannot be modified right now, the solver is running.
    //   (errorid 6)
    //     On entry, nnzh = <value>.
    //     Constraint: nnzh >= 0.
    //   (errorid 6)
    //     On entry, nnzc = <value>.
    //     Constraint: nnzc >= 0.
    //   (errorid 7)
    //     On entry, i = <value>, idxc[i-1] = <value> and
    //     idxc[i] = <value>.
    //     Constraint: idxc[i-1] < idxc[i] (ascending order).
    //   (errorid 7)
    //     On entry, i = <value>, idxc[i-1] = <value> and
    //     n = <value>.
    //     Constraint: 1 <= idxc[i-1] <= n.
    //   (errorid 8)
    //     On entry, i = <value>, irowh[i-1] = <value> and
    //     n = <value>.
    //     Constraint: 1 <= irowh[i-1] <= n.
    //   (errorid 8)
    //     On entry, i = <value>, icolh[i-1] = <value> and
    //     n = <value>.
    //     Constraint: 1 <= icolh[i-1] <= n.
    //   (errorid 8)
    //     On entry, i = <value>, irowh[i-1] = <value> and
    //     icolh[i-1] = <value>.
    //     Constraint: irowh[i-1] <= icolh[i-1] (elements within the upper triangle).
    //   (errorid 8)
    //     On entry, more than one element of h has row index <value>
    //     and column index <value>.
    //     Constraint: each element of h must have a unique row and column index.
    //   (errorid 10601)
    //     On entry, argument <value> must be a vector of size <value> array.
    //     Supplied argument has <value> dimensions.
    //   (errorid 10601)
    //     On entry, argument <value> must be a vector of size <value> array.
    //     Supplied argument was a vector of size <value>.
    //   (errorid 10601)
    //     On entry, argument <value> must be a vector of size <value> array.
    //     The size for the supplied array could not be ascertained.
    //   (errorid 10602)
    //     On entry, the raw data component of <value> is null.
    //   (errorid 10603)
    //     On entry, unable to ascertain a value for <value>.
    //   (errorid 10605)
    //     On entry, the communication class <value> has not been initialized
    //     correctly.
    //   (errorid -99)
    //     An unexpected error has been triggered by this routine.
    //   (errorid -399)
    //     Your licence key may have expired or may not have been installed correctly.
    //   (errorid -999)
    //     Dynamic memory allocation failed.

    extern "C" {
#if defined(_WIN32) && defined(USE_STDCALL)
#define e04rfft_(en_data, handle, nnzc, idxc, c, nnzh, irowh, icolh, h,  \
                 errbuf, ifail, errbuf_length)                           \
  E04RFFT(en_data, handle, nnzc, idxc, c, nnzh, irowh, icolh, h, errbuf, \
          errbuf_length, ifail)
#elif defined(_WIN32) || defined(_WIN64)
#define e04rfft_ E04RFFT
#else
#define E04RFFT e04rfft_
#endif
    extern void NAG_CALL E04RFFT(
      types::engine_data &en_data, void *handle, const types::f77_integer &nnzc,
      const types::f77_integer idxc[], const double c[],
      const types::f77_integer &nnzh, const types::f77_integer irowh[],
      const types::f77_integer icolh[], const double h[],
      char *errbuf NAG_STDCALL_LEN(errbuf_length),
      types::f77_integer &ifail NAG_NSTDCALL_LEN(errbuf_length));
    }

    class CommE04RA;

    class OptionalE04RF : public utility::Optional {
    public:
      OptionalE04RF() : Optional() {}
      template <typename COMM, typename IDXC, typename C, typename IROWH,
                typename ICOLH, typename H>
      friend void handle_set_quadobj(COMM &comm, const IDXC &idxc, const C &c,
                                     const IROWH &irowh, const ICOLH &icolh,
                                     const H &h, opt::OptionalE04RF &opt);
    };

    template <typename COMM, typename IDXC, typename C, typename IROWH,
              typename ICOLH, typename H>
    void handle_set_quadobj(COMM &comm, const IDXC &idxc, const C &c,
                            const IROWH &irowh, const ICOLH &icolh, const H &h,
                            opt::OptionalE04RF &opt) {
      opt.fail.prepare("opt::handle_set_quadobj (e04rf)");
      types::engine_data en_data;
      engine_routines::y90haan_(en_data);
      en_data.allocate_workspace = constants::NAG_ED_YES;
      static_assert(std::is_same<COMM, utility::NoneCopyableComm>::value ||
                      std::is_same<COMM, opt::CommE04RA>::value,
                    "Invalid type for comm: must be either "
                    "utility::NoneCopyableComm or opt::CommE04RA");
      if (!(comm.check())) {
        opt.fail.raise_error_comm_invalid("comm");
        if (opt.fail.error_thrown) {
          return;
        }
      }
      data_handling::RawData<types::f77_integer,
                             data_handling::ArgIntent::IntentIN,
                             typename std::remove_reference<IDXC>::type>
        local_idxc(idxc);
      data_handling::RawData<double, data_handling::ArgIntent::IntentIN,
                             typename std::remove_reference<C>::type>
        local_c(c);
      data_handling::RawData<types::f77_integer,
                             data_handling::ArgIntent::IntentIN,
                             typename std::remove_reference<IROWH>::type>
        local_irowh(irowh);
      data_handling::RawData<types::f77_integer,
                             data_handling::ArgIntent::IntentIN,
                             typename std::remove_reference<ICOLH>::type>
        local_icolh(icolh);
      data_handling::RawData<double, data_handling::ArgIntent::IntentIN,
                             typename std::remove_reference<H>::type>
        local_h(h);

      types::f77_integer local_nnzc =
        data_handling::get_size(opt.fail, "nnzc", local_idxc, 1, local_c, 1);
      types::f77_integer local_nnzh =
        data_handling::get_size(opt.fail, "nnzh", local_irowh, 1, local_icolh,
                                1, local_h, 1);

      local_h.check(opt.fail, "h", false, local_nnzh);
      if (opt.fail.error_thrown) {
        return;
      }
      local_icolh.check(opt.fail, "icolh", false, local_nnzh);
      if (opt.fail.error_thrown) {
        return;
      }
      local_irowh.check(opt.fail, "irowh", false, local_nnzh);
      if (opt.fail.error_thrown) {
        return;
      }
      local_c.check(opt.fail, "c", false, local_nnzc);
      if (opt.fail.error_thrown) {
        return;
      }
      local_idxc.check(opt.fail, "idxc", false, local_nnzc);
      if (opt.fail.error_thrown) {
        return;
      }

      e04rfft_(en_data, &comm.handle, local_nnzc, local_idxc.data, local_c.data,
               local_nnzh, local_irowh.data, local_icolh.data, local_h.data,
               opt.fail.errbuf, opt.fail.errorid, opt.fail.errbuf_length);

      if (!(opt.fail.initial_error_handler(en_data))) {
        if (opt.fail.ierr == 1 && opt.fail.ifmt == 100) {
          opt.fail.set_errorid(1, error_handler::ErrorCategory::Error,
                               error_handler::ErrorType::GeneralError);
          opt.fail.append_msg(false, "comm.handle has not been initialized.");
        } else if (opt.fail.ierr == 1 && opt.fail.ifmt == 101) {
          opt.fail.set_errorid(1, error_handler::ErrorCategory::Error,
                               error_handler::ErrorType::GeneralError);
          opt.fail.append_msg(false, "comm.handle does not belong to the NAG "
                                     "optimization modelling suite,");
          opt.fail.append_msg(false, "has not been initialized properly or is "
                                     "corrupted.");
        } else if (opt.fail.ierr == 1 && opt.fail.ifmt == 102) {
          opt.fail.set_errorid(1, error_handler::ErrorCategory::Error,
                               error_handler::ErrorType::GeneralError);
          opt.fail.append_msg(false, "comm.handle has not been initialized "
                                     "properly or is corrupted.");
        } else if (opt.fail.ierr == 2 && opt.fail.ifmt == 201) {
          opt.fail.set_errorid(2, error_handler::ErrorCategory::Error,
                               error_handler::ErrorType::GeneralError);
          opt.fail.append_msg(false, "The problem cannot be modified right "
                                     "now, the solver is running.");
        } else if (opt.fail.ierr == 6 && opt.fail.ifmt == 601) {
          opt.fail.set_errorid(6, error_handler::ErrorCategory::Error,
                               error_handler::ErrorType::GeneralError);
          opt.fail.append_msg(true, "On entry, nnzh = ", 1, ".");
          opt.fail.append_msg(false, "Constraint: nnzh >= 0.");
        } else if (opt.fail.ierr == 6 && opt.fail.ifmt == 602) {
          opt.fail.set_errorid(6, error_handler::ErrorCategory::Error,
                               error_handler::ErrorType::GeneralError);
          opt.fail.append_msg(true, "On entry, nnzc = ", 1, ".");
          opt.fail.append_msg(false, "Constraint: nnzc >= 0.");
        } else if (opt.fail.ierr == 7 && opt.fail.ifmt == 701) {
          opt.fail.set_errorid(7, error_handler::ErrorCategory::Error,
                               error_handler::ErrorType::GeneralError);
          opt.fail.append_msg(false, "On entry, i = ", 1, ", idxc[i-1] = ", 2,
                              " and");
          opt.fail.append_msg(true, "idxc[i] = ", 3, ".");
          opt.fail.append_msg(false, "Constraint: idxc[i-1] < idxc[i] "
                                     "(ascending order).");
        } else if (opt.fail.ierr == 7 && opt.fail.ifmt == 702) {
          opt.fail.set_errorid(7, error_handler::ErrorCategory::Error,
                               error_handler::ErrorType::GeneralError);
          opt.fail.append_msg(false, "On entry, i = ", 1, ", idxc[i-1] = ", 2,
                              " and");
          opt.fail.append_msg(true, "n = ", 3, ".");
          opt.fail.append_msg(false, "Constraint: 1 <= idxc[i-1] <= n.");
        } else if (opt.fail.ierr == 8 && opt.fail.ifmt == 801) {
          opt.fail.set_errorid(8, error_handler::ErrorCategory::Error,
                               error_handler::ErrorType::GeneralError);
          opt.fail.append_msg(false, "On entry, i = ", 1, ", irowh[i-1] = ", 2,
                              " and");
          opt.fail.append_msg(true, "n = ", 3, ".");
          opt.fail.append_msg(false, "Constraint: 1 <= irowh[i-1] <= n.");
        } else if (opt.fail.ierr == 8 && opt.fail.ifmt == 802) {
          opt.fail.set_errorid(8, error_handler::ErrorCategory::Error,
                               error_handler::ErrorType::GeneralError);
          opt.fail.append_msg(false, "On entry, i = ", 1, ", icolh[i-1] = ", 2,
                              " and");
          opt.fail.append_msg(true, "n = ", 3, ".");
          opt.fail.append_msg(false, "Constraint: 1 <= icolh[i-1] <= n.");
        } else if (opt.fail.ierr == 8 && opt.fail.ifmt == 803) {
          opt.fail.set_errorid(8, error_handler::ErrorCategory::Error,
                               error_handler::ErrorType::GeneralError);
          opt.fail.append_msg(false, "On entry, i = ", 1, ", irowh[i-1] = ", 2,
                              " and");
          opt.fail.append_msg(true, "icolh[i-1] = ", 3, ".");
          opt.fail.append_msg(false, "Constraint: irowh[i-1] <= icolh[i-1] "
                                     "(elements within the upper triangle).");
        } else if (opt.fail.ierr == 8 && opt.fail.ifmt == 804) {
          opt.fail.set_errorid(8, error_handler::ErrorCategory::Error,
                               error_handler::ErrorType::GeneralError);
          opt.fail.append_msg(
            false, "On entry, more than one element of h has row index ", 1);
          opt.fail.append_msg(true, "and column index ", 2, ".");
          opt.fail.append_msg(false, "Constraint: each element of h must have "
                                     "a unique row and column index.");
        } else {
          opt.fail.set_unexpected_error();
        }
        opt.fail.throw_error();
      }
      if (opt.fail.error_thrown) {
        return;
      }
      opt.fail.throw_warning();
    }

    // alt-1
    template <typename COMM, typename IDXC, typename C, typename IROWH,
              typename ICOLH, typename H>
    void handle_set_quadobj(COMM &comm, const IDXC &idxc, const C &c,
                            const IROWH &irowh, const ICOLH &icolh,
                            const H &h) {
      opt::OptionalE04RF local_opt;

      handle_set_quadobj(comm, idxc, c, irowh, icolh, h, local_opt);
    }
  }
}
#define e04rf opt::handle_set_quadobj
#endif