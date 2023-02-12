#!/bin/bash
ls | grep -v -e .c$ -e .sh$ -e README -e .txt$ -e .dat$ | xargs -t rm
